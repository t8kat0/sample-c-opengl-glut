/* compile command line:

gcc square.c -osquare.exe \
 -lOpenGLUT \
 -lopengl32 \
 -I"D:/Libraries/OpenGL/OpenGLUT-0.6.3/" \
 -L"D:/Libraries/OpenGL/OpenGLUT-0.6.3/"

 */

/* [ 注意(実行時) ]
 * OpenGLUT.dll を実行ファイルと同じディレクトリか SysWOW64 に配置してください。
 */

#include <stdio.h>
#include <openglut.h>

void display()
{
    // 背景を塗りつぶす
    glClear(GL_COLOR_BUFFER_BIT);
    
    // 正方形を描画する(線を引く x4)
    glBegin(GL_LINE_LOOP);
    glVertex2d(-0.9, -0.9);
    glVertex2d( 0.9, -0.9);
    glVertex2d( 0.9,  0.9);
    glVertex2d(-0.9,  0.9);
    glEnd();
    
    // (フラッシュ)
    glFlush();
}

void init()
{
    // R, G, B, 不透明度 を指定する
    glClearColor(0.0, 0.0, 1.0, 0.5);
}

// 正方形を描画します。
int main(int argc, char *argv[])
{
    printf("OpenGLUT sample proguram: begin ----\n");
    
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA);
    glutCreateWindow("Sample");
    glutDisplayFunc(display);
    
    init();
    
    glutMainLoop();
    
    printf("OpenGLUT sample proguram: end ------\n");
    return 0;
}
