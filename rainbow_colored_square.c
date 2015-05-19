/* compile command line:

gcc rainbow_colored_square.c -orainbow_colored_square.exe \
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
    
    // 多角形を描画する(頂点4個)
    glBegin(GL_POLYGON);
    
    // 頂点ごとに色を指定する
    glColor3d(1.0, 0.0, 0.0); // 赤
    glVertex2d(-0.9, -0.9);
    glColor3d(0.0, 1.0, 0.0); // 緑
    glVertex2d( 0.9, -0.9);
    glColor3d(0.0, 0.0, 1.0); // 青
    glVertex2d( 0.9,  0.9);
    glColor3d(1.0, 1.0, 0.0); // 黄
    glVertex2d(-0.9,  0.9);
    
    glEnd();
    
    // (フラッシュ)
    glFlush();
}

void init()
{
    // ウインドウの背景色(RGB+不透明度)を指定
    glClearColor(1.0, 1.0, 1.0, 0.5); // 白
}

// 七色に塗りつぶされた正方形を描画します。
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
