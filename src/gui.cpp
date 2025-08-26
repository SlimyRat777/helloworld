#include "helloworld.h"

/*
* This function renders the user interface. I'm actually cheating a little bit here: the only user
* interface window that's rendered is a "demo" that comes with the ImGui library. It basically has a
* bunch of widgets that show what ImGui is capable of, so you have some interesting stuff to play with
* and I didn't actually have to program any of it.
* 
* In any case, you can add your own user interface elements here.
*/
void ImGuiRender() {

	// These functions initialize the UI rendering process with both OpenGL and GLFW
	ImGui_ImplOpenGL3_NewFrame();
	ImGui_ImplGlfw_NewFrame();

	// This function creates a new "Frame", which is the basic foundation of an ImGui UI
	ImGui::NewFrame(); {

		/* This renders an ImGui "Demo" window that shows off its UI elements (you can delete this and replace it with your own)
		 * You can get an equivalent of this window online, which also provides the code necessary to create each UI element:
		 * https://pthom.github.io/imgui_manual_online/manual/imgui_manual.html
		 */
		ImGui::ShowDemoWindow();

		// This renders an ImGui window displaying the output image
		DrawOutputImage();
	}
	
	// This function makes the graphics API calls (in this case OpenGL) to render the user interface
	ImGui::Render();

	// This actually copies the GUI to the OpenGL frame buffer (in this case probably the GLFW back buffer)
	ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

}