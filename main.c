#include <avr/io.h>
#include <util/delay.h>

#define LED (1 << PB0)

// global variables
volatile uint32_t loop_count;

// function prototypes
void setup(void);

void play_Bb466(uint32_t duration_ms);
void play_C523(uint32_t duration_ms);
void play_D554(uint32_t duration_ms);
void play_F698(uint32_t duration_ms);
void play_E659(uint32_t duration_ms);
void play_Eb622(uint32_t duration_ms);
void play_F698(uint32_t duration_ms);
void play_G784(uint32_t duration_ms);
void play_A880(uint32_t duration_ms);
void play_Bb932(uint32_t duration_ms);
void play_C1047(uint32_t duration_ms);

void play_happy_birthday(void);
void play_rolling_along(void);

// function definitions
void setup()
{
    DDRB |= LED;
}

void play_Bb466(uint32_t duration_ms)
{
    const uint16_t frequency_Hz = 466;
    const uint16_t period_us_tuning_offset = 2;
    const uint16_t period_us = 2145 - period_us_tuning_offset;
    const uint16_t half_period_us = period_us / 2;
    const uint32_t calculated_loops = duration_ms * 1000 / period_us;

    for(uint16_t loops = (uint16_t)calculated_loops; loops != 0; --loops)
    {
        PORTB = LED;
        _delay_us(half_period_us);
        PORTB = 0;
        _delay_us(half_period_us);
    }
}

void play_C523(uint32_t duration_ms)
{
    const uint16_t frequency_Hz = 523;
    const uint16_t period_us_tuning_offset = 2;
    const uint16_t period_us = 1912 - period_us_tuning_offset;
    const uint16_t half_period_us = period_us / 2;
    const uint32_t calculated_loops = duration_ms * 1000 / period_us;

    for(uint16_t loops = (uint16_t)calculated_loops; loops != 0; --loops)
    {
        PORTB = LED;
        _delay_us(half_period_us);
        PORTB = 0;
        _delay_us(half_period_us);
    }
}

void play_D554(uint32_t duration_ms)
{
    const uint16_t frequency_Hz = 587;
    const uint16_t period_us_tuning_offset = 2;
    const uint16_t period_us = 1703 - period_us_tuning_offset;
    const uint16_t half_period_us = period_us / 2;
    const uint32_t calculated_loops = duration_ms * 1000 / period_us;

    for(uint16_t loops = (uint16_t)calculated_loops; loops != 0; --loops)
    {
        PORTB = LED;
        _delay_us(half_period_us);
        PORTB = 0;
        _delay_us(half_period_us);
    }
}

void play_Eb622(uint32_t duration_ms)
{
    const uint16_t frequency_Hz = 622;
    const uint16_t period_us_tuning_offset = 2;
    const uint16_t period_us = 1608 - period_us_tuning_offset;
    const uint16_t half_period_us = period_us / 2;
    const uint32_t calculated_loops = duration_ms * 1000 / period_us;

    for(uint16_t loops = (uint16_t)calculated_loops; loops != 0; --loops)
    {
        PORTB = LED;
        _delay_us(half_period_us);
        PORTB = 0;
        _delay_us(half_period_us);
    }
}

void play_E659(uint32_t duration_ms)
{
    const uint16_t frequency_Hz = 659;
    const uint16_t period_us_tuning_offset = 2;
    const uint16_t period_us = 1517 - period_us_tuning_offset;
    const uint16_t half_period_us = period_us / 2;
    const uint32_t calculated_loops = duration_ms * 1000 / period_us;

    for(uint16_t loops = (uint16_t)calculated_loops; loops != 0; --loops)
    {
        PORTB = LED;
        _delay_us(half_period_us);
        PORTB = 0;
        _delay_us(half_period_us);
    }
}

void play_F698(uint32_t duration_ms)
{
    const uint16_t frequency_Hz = 698;
    const uint16_t period_us_tuning_offset = 2;
    const uint16_t period_us = 1432 - period_us_tuning_offset;
    const uint16_t half_period_us = period_us / 2;
    const uint32_t calculated_loops = duration_ms * 1000 / period_us;

    for(uint16_t loops = (uint16_t)calculated_loops; loops != 0; --loops)
    {
        PORTB = LED;
        _delay_us(half_period_us);
        PORTB = 0;
        _delay_us(half_period_us);
    }
}

void play_G784(uint32_t duration_ms)
{
    const uint16_t frequency_Hz = 784;
    const uint16_t period_us_tuning_offset = 2;
    const uint16_t period_us = 1276 - period_us_tuning_offset;
    const uint16_t half_period_us = period_us / 2;
    const uint32_t calculated_loops = duration_ms * 1000 / period_us;

    for(uint16_t loops = (uint16_t)calculated_loops; loops != 0; --loops)
    {
        PORTB = LED;
        _delay_us(half_period_us);
        PORTB = 0;
        _delay_us(half_period_us);
    }
}

void play_A880(uint32_t duration_ms)
{
    const uint16_t frequency_Hz = 880;
    const uint16_t period_us_tuning_offset = 2;
    const uint16_t period_us = 1136 - period_us_tuning_offset;
    const uint16_t half_period_us = period_us / 2;
    const uint32_t calculated_loops = duration_ms * 1000 / period_us;

    for(uint16_t loops = (uint16_t)calculated_loops; loops != 0; --loops)
    {
        PORTB = LED;
        _delay_us(half_period_us);
        PORTB = 0;
        _delay_us(half_period_us);
    }
}

void play_Bb932(uint32_t duration_ms)
{
    const uint16_t frequency_Hz = 932;
    const uint16_t period_us_tuning_offset = 2;
    const uint16_t period_us = 1072 - period_us_tuning_offset;
    const uint16_t half_period_us = period_us / 2;
    const uint32_t calculated_loops = duration_ms * 1000 / period_us;

    for(uint16_t loops = (uint16_t)calculated_loops; loops != 0; --loops)
    {
        PORTB = LED;
        _delay_us(half_period_us);
        PORTB = 0;
        _delay_us(half_period_us);
    }
}

void play_C1047(uint32_t duration_ms)
{
    const uint16_t frequency_Hz = 1047;
    const uint16_t period_us_tuning_offset = 2;
    const uint16_t period_us = 955 - period_us_tuning_offset;
    const uint16_t half_period_us = period_us / 2;
    const uint32_t calculated_loops = duration_ms * 1000 / period_us;

    for(uint16_t loops = (uint16_t)calculated_loops; loops != 0; --loops)
    {
        PORTB = LED;
        _delay_us(half_period_us);
        PORTB = 0;
        _delay_us(half_period_us);
    }
}

void play_happy_birthday()
{
    play_C523(((111 * 2 / 3) - 6) * 4); // hap'
    _delay_ms(6 * 4);
    play_C523(((111 * 1 / 3) - 6) * 4); // 'py
    _delay_ms(6 * 4);

    play_D554(105 * 4); // birth
    _delay_ms(6 * 4);
    play_C523(105 * 4); // day
    _delay_ms(6 * 4);
    play_F698(105 * 4); // to
    _delay_ms(6 * 4);

    play_E659(200 * 4); // you
    _delay_ms(33 * 4);
    play_C523(((111 * 2 / 3) - 6) * 4); // hap'
    _delay_ms(6 * 4);
    play_C523(((111 * 1 / 3) - 6) * 4); // py'
    _delay_ms(6 * 4);

    play_D554(105 * 4); // birth
    _delay_ms(6 * 4);
    play_C523(105 * 4); // day
    _delay_ms(6 * 4);
    play_G784(105 * 4); // to
    _delay_ms(6 * 4);

    play_F698(200 * 4); // you
    _delay_ms(33 * 4);
    play_C523(((111 * 2 / 3) - 6) * 4); // hap'
    _delay_ms(6 * 4);
    play_C523(((111 * 1 / 3) - 6) * 4); // 'py
    _delay_ms(6 * 4);

    play_C1047(105 * 4); // birth
    _delay_ms(6 * 4);
    play_A880(105 * 4); // day
    _delay_ms(6 * 4);
    play_F698(105 * 4); // dear
    _delay_ms(6 * 4);

    play_E659(105 * 4); // <INSERT
    _delay_ms(6 * 4);
    play_D554(222 * 4); // NOUN HERE>
    _delay_ms(6 * 4);
    play_Bb932(((111 * 2 / 3) - 6) * 4); // hap'
    _delay_ms(6 * 4);
    play_Bb932(((111 * 1 / 3) - 6) * 4); // 'py
    _delay_ms(6 * 4);

    play_A880(105 * 4); // birth
    _delay_ms(6 * 4);
    play_F698(105 * 4); // day
    _delay_ms(6 * 4);
    play_G784(105 * 4); // to
    _delay_ms(6 * 4);

    play_F698(333 * 4); // you
    _delay_ms(6 * 4);
}

void play_rolling_along()
{
    for(uint8_t refrain2 = 2; refrain2 != 0; --refrain2) {
        for(uint8_t refrain1 = 2; refrain1 != 0; --refrain1) {
            play_F698((111 - 40) * 2); // first - for
            _delay_ms(40 * 2);
            play_D554((111 - 40) * 2); // to - the
            _delay_ms(40 * 2);
            play_F698(200 * 2); // fight - right
            _delay_ms(33 * 2);
        }
        play_F698((111 - 40) * 2); // and
        _delay_ms(40 * 2);
        play_D554((111 - 40) * 2); // to 
        _delay_ms(40 * 2);
        play_F698(111 * 2); // build
        _delay_ms(33 * 2);
        play_G784(60 * 2); // the
        play_F698((111 - 40) * 2); // na'
        _delay_ms(40 * 2);
        play_D554((111 - 20) * 2); // 'tion's
        _delay_ms(20 * 2);
        play_F698(200 * 2); // might
        _delay_ms(33 * 2);

        play_D554(105 * 2); // and
        _delay_ms(6 * 2);
        play_Eb622(105 * 2); // the
        _delay_ms(6 * 2);
        play_F698((111 - 40) * 2); // ar'
        _delay_ms(40 * 2);
        play_Eb622(200 * 2); // 'my
        _delay_ms(33 * 2);
        play_C523((111 - 40) * 2); // goes
        _delay_ms(40 * 2);
        play_F698((111 - 40) * 2); // rol'
        _delay_ms(40 * 2);
        play_Eb622(200 * 2); // 'ling
        _delay_ms(33 * 2);
        play_C523((111 - 40) * 2); // a'
        _delay_ms(40 * 2);
        play_Bb466(200 * 5); // 'long
        _delay_ms(33 * 10);
    }

    for(uint8_t refrain1 = 2; refrain1 != 0; --refrain1) {
        play_F698((111 - 40) * 2); // then - it's
        _delay_ms(40 * 2);
    }

    for(uint8_t refrain1 = 2; refrain1 != 0; --refrain1) {
        play_Bb932((222 - 40) * 2); // hi - hi
        _delay_ms(40 * 2);
    }

    play_F698((333 - 40) * 2); // hey
    _delay_ms(40 * 2);
    play_F698((111 - 40) * 2); // the
    _delay_ms(40 * 2);

    play_G784(((111 + 40) * 4 / 3) * 2); // ar'
    play_A880(((111 + 40) * 1 / 3) * 2); // 'my's
    play_Bb932((111 - 40) * 2); // on
    _delay_ms(40 * 2);
    play_G784((111 - 40) * 2); // its
    _delay_ms(40 * 2);
    play_F698((333 - 40) * 2); // way
    _delay_ms(40 * 7);

    play_Bb932((111 - 40) * 2); // count
    _delay_ms(40 * 2);
    play_Bb932((222 - 40) * 2); // off
    _delay_ms(40 * 2);
    play_A880((111 - 40)* 2); // the
    _delay_ms(40 * 2);
    play_G784(((111 + 40) * 4 / 3) * 2); // ca'
    play_A880(((111 + 40) * 1 / 3) * 2); // 'dence
    play_Bb932((111 - 40) * 2); // loud
    _delay_ms(40 * 2);
    play_G784((111 - 40) * 2); // and
    _delay_ms(40 * 2);
    play_C1047((200 - 40) * 6); // strong
    _delay_ms(33 * 12);

    for(uint8_t refrain1 = 2; refrain1 != 0; --refrain1) {
        play_F698((111 - 40) * 2); // for - where
        _delay_ms(40 * 2);
    }

    for(uint8_t refrain1 = 2; refrain1 != 0; --refrain1) {
        play_Bb932((222 - 40) * 2); // 'er - we
        _delay_ms(40 * 2);
    }
    play_A880((200 - 40) * 4); // go
    _delay_ms(33 * 6);

    play_G784(((111 + 40) * 4 / 3) * 2); // you
    play_A880(((111 + 40) * 1 / 3) * 2); // will
    play_Bb932((111 - 40) * 2); // al'
    _delay_ms(40 * 2);
    play_G784((111 - 40) * 2); // 'ways
    _delay_ms(40 * 2);
    play_F698((222 - 40) * 2); // know
    _delay_ms(40 * 2);

    play_D554(105 * 2); // that
    _delay_ms(6 * 2);
    play_Eb622(105 * 2); // the
    _delay_ms(6 * 2);
    play_F698((111 - 40) * 2); // ar'
    _delay_ms(40 * 2);
    play_Eb622(200 * 2); // 'my
    _delay_ms(33 * 2);
    play_C523((111 - 40) * 2); // goes
    _delay_ms(40 * 2);
    play_F698((111 - 40) * 2); // rol'
    _delay_ms(40 * 2);
    play_Eb622(200 * 2); // 'ling
    _delay_ms(33 * 2);
    play_C523((111 - 40) * 2); // a'
    _delay_ms(40 * 2);
    play_Bb466(200 * 5); // 'long
    _delay_ms(33 * 10);
}

int main(void)
{   
    setup();

    for(;;) {
        play_happy_birthday();
        _delay_ms(1000);
        play_rolling_along();
        _delay_ms(5000);
    }

    return 0;
}

