#include "settings.h"
#include "Game.h"

#include <EncButton.h>

EncButton<EB_CALLBACK, BUTTON_START> btnStart;
EncButton<EB_CALLBACK, BUTTON_STOP> btnStop;
EncButton<EB_CALLBACK, BUTTON_FUNC> btnFunc;

EncButton<EB_CALLBACK, BUTTON_PLAYER_1> btnP1;
EncButton<EB_CALLBACK, BUTTON_PLAYER_2> btnP2;
EncButton<EB_CALLBACK, BUTTON_PLAYER_3> btnP3;
EncButton<EB_CALLBACK, BUTTON_PLAYER_4> btnP4;

Game *game;
bool fs = false;

void setup() {
  Serial.begin(9600);
  initPins();
  
  btnStart.attach(PRESS_HANDLER, [](){game->onStartButtonPress();});
  btnStop.attach(PRESS_HANDLER, [](){game->onStopButtonPress();});
  btnFunc.attach(CLICK_HANDLER, [](){game->switchSound();});
  btnFunc.attach(HOLDED_HANDLER, changeGame);

  btnP1.attach(PRESS_HANDLER, [](){game->onPlayerButtonPress(LED_PLAYER_1);});
  btnP2.attach(PRESS_HANDLER, [](){game->onPlayerButtonPress(LED_PLAYER_2);});
  btnP3.attach(PRESS_HANDLER, [](){game->onPlayerButtonPress(LED_PLAYER_3);});
  btnP4.attach(PRESS_HANDLER, [](){game->onPlayerButtonPress(LED_PLAYER_4);});

  game = new Game(false);
  game->showGreeting();
}

void loop() {
  game->tick();
  
  btnStart.tick();
  btnStop.tick();
  btnFunc.tick();

  btnP1.tick();
  btnP2.tick();
  btnP3.tick();
  btnP4.tick();
}

void initPins() {
  pinMode(LED_PLAYER_1, OUTPUT);
  pinMode(LED_PLAYER_2, OUTPUT);
  pinMode(LED_PLAYER_3, OUTPUT);
  pinMode(LED_PLAYER_4, OUTPUT);
  pinMode(LED_SIGNAL, OUTPUT);
}


void changeGame(){
  Game *temp = game;
  game = game->nextGame();
  delete temp;
  game->showType();
}
