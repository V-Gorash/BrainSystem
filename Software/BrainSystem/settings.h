#pragma once

////////////////// PIN SETTINGS | НАСТРОЙКИ ПИНОВ ////////////////////////

// LEDs for players 1-4 | Светодиоды для игроков 1-4
#define LED_PLAYER_1 5
#define LED_PLAYER_2 6
#define LED_PLAYER_3 7
#define LED_PLAYER_4 8

// LED for game signals | Светодиод сигнала старта игры
#define LED_SIGNAL 10

// Buttons for players 1-4 | Кнопки игроков 1-4
#define BUTTON_PLAYER_1 A5
#define BUTTON_PLAYER_2 A3
#define BUTTON_PLAYER_3 A1
#define BUTTON_PLAYER_4 A0

// Control buttons | Управляющие кнопки
#define BUTTON_START 2
#define BUTTON_FUNC 3
#define BUTTON_STOP 4

// Buzzer | Динамик
#define BUZZER 11 // buzzer pin should support PWM | пин должен поддерживать генерацию ШИМ сигнала

////////////////// TIME SETTINGS | НАСТРОЙКИ ВРЕМЕННЫХ ИНТЕРВАЛОВ //////////////////

// All times should be set as seconds | Все временные отрезки задаются в секундах
// Jeopardy game | Своя Игра
#define JEOPARDY_GAME_TIME 7 // Game time | Время игры
#define JEOPARDY_TICKS_START 5 // Ticks start time | За сколько секунд до конца начать звуковые сигналы

// Brain Ring game | Брейн ринг
#define BRAIN_GAME_TIME 60 // Game time | Время игры
#define BRAIN_WA_TIME 20// Time for second team if answer is wrong | Время для второй команды в случае неверного ответа
#define BRAIN_TICKS_START 5 // Ticks start time | За сколько секунд до конца начать звуковые сигналы
#define BRAIN_PRE_END_TIME 10 // Time for pre-end signal | Время подачи предварительного сигнала

///////////////// SOUND SETTINGS | НАСТРОЙКИ ЗВУКА /////////////////////////////

// Sound tones | Тональности звуков
#define TONE_START 2000 // Game start sound | Звук начала игры
#define TONE_PRESS 1000 // Button press sound | Звук нажатия кнопки
#define TONE_FALSTART 500 // Falstart sound | Звук фальстарта
#define TONE_TICK 1500 // Time tick sound | Звук отсчета времени
#define TONE_END 250 // Time end sound | Звук окончания времени 

// Sound durations (in milliseconds) | Длительности звуков (в миллисекундах)
#define DURATION_START 1000 // Game start sound | Звук начала игры
#define DURATION_PRESS 1000 // Button press sound | Звук нажатия кнопки
#define DURATION_FALSTART 500 // Falstart sound | Звук фальстарта
#define DURATION_TICK 250 // Time tick sound | Звук отсчета времени
#define DURATION_END 1000 // Time end sound | Звук окончания времени 
