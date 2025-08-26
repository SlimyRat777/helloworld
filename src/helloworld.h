#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <imgui.h>
#include <imgui_impl_glfw.h>
#include <imgui_impl_opengl3.h>

extern float* output_image_ptr;
extern int resolution;

void ImGuiRender();
void RenderOutputImage();
void UpdateOutputTexture();