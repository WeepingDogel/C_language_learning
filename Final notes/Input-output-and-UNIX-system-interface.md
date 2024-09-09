### Essential Notes on Input/Output (I/O) and UNIX System Interface in C

Here are key concepts and a summary that you can incorporate into your Notion for learning about **input/output** (I/O) and the **UNIX system interface** in C programming.

---

### **1. Input/Output in C**

#### **Standard I/O (stdio.h)**
In C, standard input/output operations are handled using functions from the `stdio.h` library, such as `printf()`, `scanf()`, `getchar()`, `putchar()`, etc.

- **`printf()`**: Outputs data to the standard output (usually the terminal).
- **`scanf()`**: Reads formatted input from the standard input (usually the keyboard).
- **`getchar()`**: Reads a single character from the input.
- **`putchar()`**: Writes a single character to the output.

#### **File I/O**
File handling in C involves working with streams using file pointers, handled via the `FILE` structure.

1. **Opening a File**:
   ```c
   FILE *fptr = fopen("filename.txt", "r");
   ```
   - Mode `"r"`: Opens the file for reading.
   - Mode `"w"`: Opens the file for writing (overwrites if it exists).
   - Mode `"a"`: Opens the file for appending.
   
2. **Reading and Writing**:
   - **`fscanf()` / `fprintf()`**: Works like `scanf()` / `printf()`, but for files.
   - **`fgets()` / `fputs()`**: Reads/writes a string from/to a file.
   - **`fgetc()` / `fputc()`**: Reads/writes a character from/to a file.
   
3. **Closing a File**:
   ```c
   fclose(fptr);
   ```

4. **Example of File I/O**:
   ```c
   #include <stdio.h>

   int main() {
       FILE *fp = fopen("data.txt", "w");
       if (fp != NULL) {
           fprintf(fp, "Hello, file!\n");
           fclose(fp);
       }
       return 0;
   }
   ```

#### **Binary File I/O**
C also allows binary file input/output.

- **Reading/Writing binary data**:
   - `fread()` / `fwrite()`: Used to read/write binary data to/from a file.

   ```c
   size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
   size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
   ```

---

### **2. UNIX System Interface in C**

The UNIX system interface provides low-level system calls to interact with the operating system for tasks like file management, process control, and inter-process communication.

#### **UNIX File I/O System Calls**
Unlike standard I/O functions, UNIX system calls directly interact with the operating system using file descriptors.

1. **File Descriptors**:
   - Every file in UNIX is associated with a file descriptor, an integer that uniquely identifies the file within a process.
   - Common file descriptors:
     - `0`: Standard Input (stdin)
     - `1`: Standard Output (stdout)
     - `2`: Standard Error (stderr)

2. **Important System Calls for File I/O**:
   - **`open()`**: Opens a file and returns a file descriptor.
     ```c
     int fd = open("filename", O_RDONLY);
     ```
   - **`read()`**: Reads data from a file.
     ```c
     ssize_t read(int fd, void *buf, size_t count);
     ```
   - **`write()`**: Writes data to a file.
     ```c
     ssize_t write(int fd, const void *buf, size_t count);
     ```
   - **`close()`**: Closes a file descriptor.
     ```c
     int close(int fd);
     ```

3. **Example**:
   ```c
   #include <fcntl.h>
   #include <unistd.h>
   #include <stdio.h>

   int main() {
       int fd = open("file.txt", O_RDONLY);
       if (fd == -1) {
           perror("Error opening file");
           return 1;
       }
       char buffer[100];
       ssize_t bytesRead = read(fd, buffer, sizeof(buffer));
       if (bytesRead > 0) {
           write(1, buffer, bytesRead);  // write to stdout
       }
       close(fd);
       return 0;
   }
   ```

#### **File Control and Permissions**
UNIX provides system calls for file manipulation.

- **`chmod()`**: Change file permissions.
  ```c
  int chmod(const char *path, mode_t mode);
  ```
- **`chown()`**: Change file ownership.
  ```c
  int chown(const char *path, uid_t owner, gid_t group);
  ```

#### **Process Control**
You can use system calls to create and manage processes in UNIX.

1. **`fork()`**: Creates a new process by duplicating the calling process.
   - Returns `0` to the child process, and the process ID (PID) of the child to the parent process.
   ```c
   pid_t fork(void);
   ```

2. **`exec()`**: Replaces the current process image with a new process image (used to run programs).
   ```c
   int execl(const char *path, const char *arg, ...);
   ```

3. **`wait()`**: Makes a parent process wait for the termination of its child.
   ```c
   pid_t wait(int *status);
   ```

#### **Inter-process Communication (IPC)**
Processes can communicate with each other in UNIX using various IPC mechanisms.

1. **Pipes**: A unidirectional communication channel between two processes.
   - **`pipe()`**: Creates a pipe.
     ```c
     int pipe(int pipefd[2]);
     ```
   - **`dup2()`**: Duplicates a file descriptor to redirect I/O.
     ```c
     int dup2(int oldfd, int newfd);
     ```

2. **Signals**: Notifications sent to a process to notify it of events (e.g., `SIGINT`, `SIGKILL`).
   - **`signal()`**: Sets a handler for a signal.
     ```c
     sighandler_t signal(int signum, sighandler_t handler);
     ```

---

### Summary:
- **I/O in C** includes using standard functions like `printf()`, `scanf()`, and file handling with `fopen()`, `fclose()`, etc.
- **UNIX system calls** provide more direct interaction with the operating system using functions like `open()`, `read()`, `write()`, and `fork()`.
- Understanding **file descriptors**, **process control**, and **IPC** is crucial for UNIX system programming.
