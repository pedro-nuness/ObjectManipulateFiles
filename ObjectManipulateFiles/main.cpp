#include <Windows.h>
#include <iostream>
#include "File/File.h"

int main( )
{
	//Define file path
	//		   path   filename
	File _file( "" , "test.txt" );

	//Create the file
	if ( _file.Create( ) ) {
		std::cout << "Created file!\n";
	}

	//Check if it's empty
	if ( _file.IsEmpty( ) ) {
		std::cout << "Empty!\n";
	}

	//Write something on the file
	for ( int i = 0; i < 10; i++ )
		_file.Write( std::string( "write" + std::to_string( i ) ) );

	//Write on specific line
	_file.WriteOnLine( "changed" , 3 );

	//Read file
	std::string _data = _file.Read( );
	std::cout << "Data: " << _data;

	//Read Lines on vector
	std::vector<std::string> Lines = _file.ReadLines( );

	//ReadSpecificLine
	std::string Line = _file.ReadLine( 3 );

	//Copy file
	_file.Copy( "C:\\Blaze\\" , "test87.txt" );

	//Delete copies
	auto Copies = _file.GetCopies( );
	for ( auto Copy : Copies )
		Copy.Delete( );

	//Erase a specific line on file
	_file.EraseLine( 3 );

	//Erase all data
	_file.Clear( );

	//Delete file
	_file.Delete( );


	while ( true )
	{
		Sleep( 300 );
	}


	return 1;
}