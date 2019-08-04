#include <Kelpie.h>

Kelpie::Kelpie(bool enableSerial)
{
    if (enableSerial)
    {
        Serial.begin(9600);
    }

    pinMode(SW1, INPUT_PULLUP);
    pinMode(SW2, INPUT_PULLUP);
    pinMode(SW3, INPUT_PULLUP);
    pinMode(SW4, INPUT_PULLUP);

    pinMode(SWLED1, OUTPUT);
    pinMode(SWLED2, OUTPUT);
    pinMode(SWLED3, OUTPUT);
    pinMode(SWLED4, OUTPUT);
}

// this function detects if a knob was changed and returns TRUE if so
boolean Kelpie::pollKnobs(void)
{
    boolean didChange = false;
    for (int i = 0; i < 16; i++)
    {
        _kelpieKnobs.value[i] = analogRead(_kelpieKnobs.name[i]);
        if ((_kelpieKnobs.value[i] - _kelpieKnobs.state[i]) > 6 || (_kelpieKnobs.value[i] - _kelpieKnobs.state[i]) < -6)
        {
            _kelpieKnobs.state[i] = _kelpieKnobs.value[i];
            didChange = true;
            //  Serial.println(_kelpieKnobs);
        }
        // Serial.print(_kelpieKnobs.state[i]);
        // Serial.print(" ");
    }
    // Serial.println();
    return didChange;
}

potentiometers Kelpie::getKnobs(void)
{
    return _kelpieKnobs;
}

boolean Kelpie::pollButtons(void)
{
    boolean didChange = false;
    for (int i = 0; i < 4; i++)
    {
        if (_kelpieButtons.buttonName[i].update())
        {
            if (_kelpieButtons.buttonName[i].fallingEdge())
            {
                _kelpieButtons.state[i] = !_kelpieButtons.state[i];
                digitalWrite(_kelpieButtons.ledName[i], _kelpieButtons.state[i]);
                didChange = true;
            }
        }
    }
    return didChange;
}

buttons Kelpie::getButtons(void)
{
    return _kelpieButtons;
}
