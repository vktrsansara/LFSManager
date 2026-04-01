#include <Arduino.h>
#include "LFSManager.h"

LFSManager fileManager(&Serial);

void setup()
{
    Serial.begin(115200);
    fileManager.begin();

    // Ваш пользовательский код инициализации...
}

void loop()
{
    // Вызов обработчика файлового менеджера
    fileManager.tick();

    // Ваш пользовательский код...
    // Избегайте использования delay(), используйте millis()
}