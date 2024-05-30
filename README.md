# File Object Manipulation

This C++ utility project is designed to simplify file manipulation tasks on Windows systems. The project provides a convenient interface for treating files as objects, allowing you to perform various operations such as creating, reading, writing, and deleting files with ease.

# Setting Up
**Include Necessary Files:**
Ensure you include the File.h header file in your project where you intend to use the File class.
```
#include "File.h"
```

# Functionalities

The File class provides the following functionalities:

### Constructor:
``Initializes a File object with the specified file path and filename.``
```
File myFile("/path/to/directory", "example.txt");
```
### File Operations:
1. ``Create():`` Creates the file. Returns true if the file is successfully created, otherwise returns false.
2. ``Delete():`` Deletes the file. Returns true if the file is successfully deleted, otherwise returns false.
3. ``Exists():`` Checks if the file exists. Returns true if the file exists, otherwise returns false.
4. ``IsEmpty():`` Checks if the file is empty. Returns true if the file is empty, otherwise returns false.

```
if (myFile.Create()) {
    std::cout << "File created successfully." << std::endl;
} else {
    std::cout << "Failed to create the file." << std::endl;
}

if (myFile.Exists()) {
    std::cout << "File exists." << std::endl;
}

if (myFile.IsEmpty()) {
    std::cout << "File is empty." << std::endl;
}

if (myFile.Delete()) {
    std::cout << "File deleted successfully." << std::endl;
} else {
    std::cout << "Failed to delete the file." << std::endl;
}
```
### Content Manipulation:
1. ``Clear():`` Clears the file content.
2. ``EraseLine(int _line):`` Erases a specific line in the file.
3. ``WriteOnLine(std::string _data, int _line):`` Writes data to a specific line in the file.
4. ``Write(T _data, bool _BreakLine = true):`` Writes data to the file, appending a new line by default.
```
myFile.Clear();
myFile.WriteOnLine("Hello, World!", 1);
myFile.EraseLine(1);
myFile.Write("Append this text.");
```
### File Information:

1. ``GetNumLines():`` Returns the number of lines in the file.
2. ``GetFilePath():`` Returns the file path.
3. ``GetFileName():`` Returns the file name.
4. ``GetFullFilePath():`` Returns the full file path.

```
int numLines = myFile.GetNumLines();
std::cout << "Number of lines: " << numLines << std::endl;

std::string filePath = myFile.GetFilePath();
std::cout << "File path: " << filePath << std::endl;

std::string fileName = myFile.GetFileName();
std::cout << "File name: " << fileName << std::endl;

std::string fullFilePath = myFile.GetFullFilePath();
std::cout << "Full file path: " << fullFilePath << std::endl;
```
### File Operations:

1. ``Move(std::string _path):`` Moves the file to a new path. Returns true if the move is successful, otherwise returns false.
2. ``Copy(std::string _path, std::string _name = ""):`` Copies the file to a new path with an optional new name.
3. ``GetCopies():`` Returns a vector of File objects representing copies of the file.

```
if (myFile.Move("/new/path/to/directory")) {
    std::cout << "File moved successfully." << std::endl;
} else {
    std::cout << "Failed to move the file." << std::endl;
}

myFile.Copy("/path/to/another/directory", "copy.txt");

std::vector<File> copies = myFile.GetCopies();
for (const auto& copy : copies) {
    std::cout << "Copy: " << copy.GetFullFilePath() << std::endl;
}
```
### Reading Content:
1. ``Read():`` Reads the entire content of the file.
2. ``ReadLine(int _line):`` Reads a specific line from the file.
3. ``ReadLines():`` Reads all lines from the file and returns them as a vector of strings.
```
std::string content = myFile.Read();
std::cout << "File content: " << content << std::endl;

std::string line = myFile.ReadLine(1);
std::cout << "Line 1: " << line << std::endl;

std::vector<std::string> lines = myFile.ReadLines();
for (const auto& line : lines) {
    std::cout << line << std::endl;
}
```


## Note:

Make sure to include the <filesystem> header, and ensure that your project is configured to support the C++17 standard or later since the code relies on features introduced in C++17.

Simplify your file handling tasks on Windows with this C++ utility project, making it easier to work with files as objects and perform common file operations with confidence.
