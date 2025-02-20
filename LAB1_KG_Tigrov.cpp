// LAB1_KG_Tigrov.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#define GLEW_DLL
#define GLFW_DLL

#include "GL\glew.h"
#include "GLFW/glfw3.h"
#include <iostream>

int main()
{
    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 1);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

    GLFWwindow* window;

    window = glfwCreateWindow(512, 512, "HEX", NULL, NULL);

    glfwMakeContextCurrent(window);

    glewExperimental = GL_TRUE;

    glewInit();

    while (!glfwWindowShouldClose(window)) {
        glClearColor(1.0, 0.2, 0.3, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        glColor3f(0.4, 1.0, 0.4);
        glBegin(GL_POLYGON);
        glVertex2f(0.0, 0.5);
        glVertex2f(0.433, 0.25);
        glVertex2f(0.433, -0.25);
        glVertex2f(0.0, -0.5);
        glVertex2f(-0.433, -0.25);
        glVertex2f(-0.433, 0.25);
        glEnd();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}