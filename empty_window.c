/* compile command line:

gcc empty_window.c -oempty_window.exe \
 -lOpenGLUT \
 -I"D:/Libraries/OpenGL/OpenGLUT-0.6.3/" \
 -L"D:/Libraries/OpenGL/OpenGLUT-0.6.3/"

 */

/* [ 注意(実行時) ]
 * OpenGLUT.dll を実行ファイルと同じディレクトリか SysWOW64 に配置してください。
 */

#include <openglut.h>
#include <stdio.h>

void display()
{
    // (何もしない)
}

// 空のウインドウを表示します。
int main(int argc, char *argv[])
{
    printf("OpenGLUT sample proguram: begin ----\n");
    
    glutInit(&argc, argv);
    glutCreateWindow("Empty Window");
    glutDisplayFunc(display);
    glutMainLoop();
    
    printf("OpenGLUT sample proguram: end ------\n");
    return 0;
}
