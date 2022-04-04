#include <GLFW/glfw3.h>

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);


        ////삼각형
        //glBegin(GL_TRIANGLES);
        //glVertex2f(-0.5F, -0.5F);
        //glVertex2f(-0.0, 0.5F);
        //glVertex2f(0.5F, -0.5F);
        //glEnd();

        ////사각형
        //glBegin(GL_QUADS);
        //glVertex2f(-0.5f, 0.5f);
        //glVertex2f(0.5f, 0.5f);
        //glVertex2f(0.5f, -0.5f);
        //glVertex2f(-0.5f, -0.5f);
        //glEnd();

        //다각형
        glBegin(GL_POLYGON);
        glVertex2i(1, 1);
        glVertex2i(1, 0);
        glVertex2i(0, 1);
        glVertex2i(-1, 0);
        glVertex2i(-1, -1);
        glVertex2i(0, 0);
        glEnd();
        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}