# File Object Manipulation

This C++ utility project is designed to simplify file manipulation tasks on Windows systems. The project provides a convenient interface for treating files as objects, allowing you to perform various operations such as creating, reading, writing, and deleting files with ease.

## Key Features:

**File Object:** The project introduces a File class that represents a file, with attributes like file path, file name, and full path.

**File Creation:** You can easily create a new file by specifying the file's path and name, and the utility takes care of the rest.

**File Deletion:** Safely delete files, and it checks whether the file exists before attempting to delete it.

## Read Operations:

Read the entire contents of a file.
Read a specific line from the file.
Retrieve all lines from the file as a vector of strings.
Check if the file is empty.
## Write Operations:

Clear the contents of a file.
Erase a specific line from the file.
Write data to a specific line in the file.

 **File Existence:** Easily check if a file exists in the specified path.

**File Copying:** Copy the contents of a file to a new file in a different location.

**File Moving:** Move a file to a different location while preserving its content.

**File Versioning:** The utility can keep track of copied versions of the same file.

## Usage:

This utility is especially useful for applications that need to interact with files as objects and perform various file-related tasks. By including the File.h header and using the File class, you can streamline your file handling operations on Windows.

## Note:

Make sure to include the <filesystem> header, and ensure that your project is configured to support the C++17 standard or later since the code relies on features introduced in C++17.

Simplify your file handling tasks on Windows with this C++ utility project, making it easier to work with files as objects and perform common file operations with confidence.
