#include <iostream>
#include <fstream>
#include <String>


int key = 0;
//bool on;
//std::string input;
void ValidateKey()
{
	std::cout << "Enter the key\n";
	std::cin >> key;
	//std::cout << "You input" << key;

	

}



void MakeFileReadable()
{
	

	//uppercase
	int Vowel = 86;
	int Constinant = 134;//67 * 2
	//lowercase
	int vowel = 118;
	int constinant = 198;//99 * 2
	int scramble = 10;
	//misc	
	char Letter;
	std::string line;
	std::ifstream File("file.dinzai");
	if (File.is_open())
	{
		while (std::getline(File, line))
		{

			int num = std::stoi(line);
			//uppercase
			if (num == 151)
			{
				Letter = char((num - Vowel));
				std::cout << Letter;
			}
			else if (num == 155)
			{
				Letter = char((num - Vowel));
				std::cout << Letter;
			}
			else if (num == 159)
			{
				Letter = char((num - Vowel));
				std::cout << Letter;
			}
			else if (num == 165)
			{
				Letter = char((num - Vowel));
				std::cout << Letter;
			}
			else if (num == 171)
			{
				Letter = char((num - Vowel));
				std::cout << Letter;
			}
			else if(num < 224)
			{
				Letter = char((num - Constinant));
				std::cout << Letter;
			}
			else 
			{

				//lowercase
				if (num == 225 + key)
				{
					Letter = char(num - (vowel + scramble) - key);

				}
				else if (num == 229 + key)
				{
					Letter = char(num - (vowel + scramble) - key);

				}
				else if (num == 233 + key)
				{
					Letter = char(num - (vowel + scramble) - key);

				}
				else if (num == 239 + key)
				{
					Letter = char(num - (vowel + scramble) - key);

				}
				else if (num == 245 + key)
				{
					Letter = char(num - (vowel + scramble) - key);

				}
				else
				{
					Letter = char(num - (constinant + scramble) - key);

				}

				std::cout << Letter;
			}


		}

		File.close();

		
	}
	else 
	{
		std::cout << "Could Not Locate File\nIs the file in the right folder?";
	} 
	


}


void main() 
{
	ValidateKey();

	MakeFileReadable();

	
	
	
	
}