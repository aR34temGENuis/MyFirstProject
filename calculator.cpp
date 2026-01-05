#include <iostream>
#include <thread>
#include <chrono>

int main ()

{
	double a, b;
	char op;
		std::cout << "Напишите первое число для калькулятора: ";
		std::cin >> a;
		std::cout << "Выберите операцию для выполнения команды (* + - /): ";
		std::cin >> op;
		std::cout << "Напишите второе число для калькулятора: ";
		std::cin >> b;
		
		if (op == '/') 
					{
						while (b == 0)
						{
							std::cout << "Ошибка! Нельзя делить на ноль!" << std::endl;
							//Теперь наша программа подождет три секунды, перед тем, как выводить следующее сообщение
							std::this_thread::sleep_for(std::chrono::seconds(3));
							std::cout << "Введите не нулевое значение для числа b" << std::endl;
							std::cin >> b;
						}
					}
					
		switch (op)
				{
				case '+':
					std::cout << "Результат: " << (a + b) << std::endl;
					break;
				case '-':
					std::cout << "Результат: " << (a - b) << std::endl;
					break;
				case '*':
					std::cout << "Результат: " << (a * b) << std::endl;
					break;
				case '/':
					std::cout << "Результат: " << (a / b) << std::endl;
					break;
				
							
				default:
					std::cout << "Ошибка! Неизвестная операция, введите правильную команду из предложенных выше!" << std::endl;
				}
		return 0;
}	
