//
//  ctest.c
//  SwiftAndC
//

#include "ctest.h"
#include <GLFW/glfw3.h>

void mycfunc(void) {
    printf("mycfunc is called. \n");
    
    glfwInit();
    GLFWwindow *const window = glfwCreateWindow(400, 400, "Window by GLFW", NULL, NULL);
    glfwMakeContextCurrent(window);
    glClearColor(0.5f, 0.6f, 0.6f, 1.0f);
    
    while(glfwWindowShouldClose(window) == GL_FALSE) {
        glClear(GL_COLOR_BUFFER_BIT);
        glBegin(GL_TRIANGLES);
        {
            glColor3f ( 1.0f, 0.0f, 0.0f);
            glVertex3f( -0.5, -0.3, 0.0 );
            glColor3f ( 0.0f, 1.0f, 0.0f);
            glVertex3f(  0.0,  0.6, 0.0 );
            glColor3f ( 0.0f, 0.0f, 1.0f);
            glVertex3f(  0.5, -0.3 ,0.0 );
        }
        glEnd();
        glfwSwapBuffers(window);
        glfwWaitEvents();
    }
    
    return;
}
