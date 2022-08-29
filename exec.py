import os

'''
This code has not been tested
I've readed that executing cmd stuff is better with subprocess module.
I don't know if executing the code will block the process, actually
I should lookup for an other way to execute all the codes, but this
is the fastest and easier way to do it.
'''

def compile_exec_code(folder_path):
   # Entering path!
   print('Entering path: ' + folder_path)
   cd_in_cmd = 'cd ' + folder_path
   os.system(cd_in_cmd)

   # Compiling code!
   compile_cmd = 'clang++ -std=c++20 -O3 main.cpp -o' + folder_path
   os.system(compile_cmd)

   # Executing code!
   exec_cmd = './' + folder_path
   os.system(exec_cmd) # I don't know if this blocks :D

   # Deleting executable
   rm_cmd = 'rm ' + folder_path
   os.system(rm_cmd)

   # Leaving path!
   print('Leaving path: ' + folder_path)
   cd_out_cmd = 'cd ..'
   os.system(cd_out_cmd)
   return

find_dir = '.'

for filename in os.listdir(find_dir):
    ldir = os.path.join(find_dir, filename)
    if not os.path.isdir(ldir):
       continue

    compile_exec_code(filename)
