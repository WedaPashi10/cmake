# Introduction
CMake input files are written in the "CMake Language" in source files named `CMakeLists.txt` or ending in a `.cmake` file name extension.

When CMake processes a project source tree, the entry point is a source file called `CMakeLists.txt` in the top-level source directory.

## Some syntactical info:

1. `cmake_minimum_required`:
    Specifies the minimum version of CMake required to run your `CMakeLists.txt` file.

    **Syntatx:**

        cmake_minimum_required(VERSION <min>[...<policy_max>] [FATAL_ERROR])

    If the running version of CMake is lower than the `<min>` required version it will stop processing the project and report an error. The optional `<policy_max>` version, if specified, needless to say - must be at least the `<min>` version.

2. `project`: 
    Set the name of the project.

    **Syntatx:**

        project(<PROJECT-NAME>
            [VERSION <major>[.<minor>[.<patch>[.<tweak>]]]]
            [DESCRIPTION <project-description-string>]
            [HOMEPAGE_URL <url-string>]
            [LANGUAGES <language-name>...])

    When called from the top-level CMakeLists.txt also stores the project name in the variable CMAKE_PROJECT_NAME.

3. `set`
    Set a normal, cache, or environment variable to a given value.

    **Syntatx:**
    
        set(<variable> <value>... [PARENT_SCOPE])

4. `include_directories`:
    Add include directories to the build.

    **Syntax:**

        include_directories([AFTER|BEFORE] [SYSTEM] dir1 [dir2 ...])

    Add the given directories to those the compiler uses to search for include files. Relative paths are interpreted as relative to the current source directory.

    The include directories are added to the INCLUDE_DIRECTORIES directory property for the current CMakeLists file. They are also added to the INCLUDE_DIRECTORIES target property for each target in the current CMakeLists file. The target property values are the ones used by the generators.  
    By using `AFTER` or `BEFORE` explicitly, you can select between appending and prepending, independent of the default.

5. `add_executible`
    Add an executable to the project using the specified source files.

    **Syntax:**

        add_executable(<name> <options>... <sources>...)

    Add an executable target called `<name>` to be built from the source files listed in the command invocation.
    The `<name>` corresponds to the logical target name and must be globally unique within a project. The actual file name of the executable built is constructed based on conventions of the native platform.




