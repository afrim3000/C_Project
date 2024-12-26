program CtoF
    implicit none
    real :: celsius, fahrenheit

    print *, 'Enter the temperature in Celsius: '
    read *, celsius


    fahrenheit = (celsius * 9.0 / 5.0) + 32.0


    print *, 'Temperature in Fahrenheit: ', fahrenheit

end program CtoF
