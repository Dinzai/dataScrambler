
#include <iostream>
#include <fstream>
#include <String>

//Dinzai Encryption tool

//still need to fix uppercase's being printed first on decompresion 

char lowerCaseLetters[27];
char upperCaseLetters[27];

char empty[1];

int space = 166;

int scramble = 10;

int key = 0;

char userTest[100];

void ScrambleLetters()
{
	std::cout << "Enter the encryption key\n";

	std::cin >> key;

	std::cin.getline(empty, sizeof(empty));

	std::cout << "Enter data to be stored\n";

	std::cin.getline(userTest, sizeof(userTest));

	std::ofstream outFileName("file.dinzai");


	for (char D : userTest)
	{
		for (int z = 0; z < 1; z++)
		{

			for (int i = 65; i <= 90; i++)
			{
				upperCaseLetters[z] = char(i);

				if (D == upperCaseLetters[z])
				{
					if (upperCaseLetters[z] == 'A')
					{
						

						if (outFileName.is_open())
						{
							outFileName << int(upperCaseLetters[z]) + int('V') + key << "\n";

						
						}

					}
					else if (upperCaseLetters[z] == 'E')
					{
						

						if (outFileName.is_open())
						{
							outFileName << int(upperCaseLetters[z]) + int('V') + key << "\n";

						}
					}
					else if (upperCaseLetters[z] == 'I')
					{


						if (outFileName.is_open())
						{
							outFileName << int(upperCaseLetters[z]) + int('V') + key << "\n";

						}
					}
					else if (upperCaseLetters[z] == 'O')
					{


						if (outFileName.is_open())
						{
							outFileName << int(upperCaseLetters[z]) + int('V') + key << "\n";

						}
					}
					else if (upperCaseLetters[z] == 'U')
					{


						if (outFileName.is_open())
						{
							outFileName << int(upperCaseLetters[z]) + int('V') + key << "\n";

						}
					}
					else
					{


						if (outFileName.is_open())
						{
							outFileName << int(upperCaseLetters[z]) + int('C') + int('C') + key << "\n";
							
						}

						

					}


				}


			}



		}
		
		
	}
	


	for (char d : userTest)
	{

		for (int z = 0; z < 1; z++)
		{
			if (d == char(32))
			{
				outFileName << space << "\n";
			}

			for (int i = 97; i <= 122; i++)
			{

				lowerCaseLetters[z] = char(i);

				if (d == lowerCaseLetters[z])
				{
					

					if (lowerCaseLetters[z] == 'a')
					{
						

						if (outFileName.is_open())
						{
							outFileName << int(lowerCaseLetters[z]) + int('v') + scramble + key << "\n";

						}


					}
					else if (lowerCaseLetters[z] == 'e')
					{


						if (outFileName.is_open())
						{
							outFileName << int(lowerCaseLetters[z]) + int('v') + scramble + key << "\n";

						}
					}
					else if (lowerCaseLetters[z] == 'i')
					{


						if (outFileName.is_open())
						{
							outFileName << int(lowerCaseLetters[z]) + int('v') + scramble + key << "\n";

						}
					}
					else if (lowerCaseLetters[z] == 'o')
					{


						if (outFileName.is_open())
						{
							outFileName << int(lowerCaseLetters[z]) + int('v') + scramble + key << "\n";

						}
					}
					else if (lowerCaseLetters[z] == 'u')
					{


						if (outFileName.is_open())
						{
							outFileName << int(lowerCaseLetters[z]) + int('v') + scramble + key << "\n";

						}
					}
					else
					{

						if (outFileName.is_open())
						{
							outFileName << int(lowerCaseLetters[z]) + int('c') + int('c') + scramble + key << "\n";
							
						}
						
						
					}


				}
				


			}
			
			
			
			
		}

		
		

	}

	

	outFileName.close();


}


void main()
{
	ScrambleLetters();
	
}
