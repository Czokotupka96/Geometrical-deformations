///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/slider.h>
#include <wx/spinctrl.h>
#include <wx/checkbox.h>
#include <wx/radiobox.h>
#include <wx/notebook.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
	private:

	protected:
		wxPanel* m_panel_IMAGE;
		wxButton* m_button1_SAVE;
		wxButton* m_button2_LOAD;
		wxButton* m_button3_RESET;
		wxNotebook* m_notebook1;
		wxPanel* m_panel_TAB2D;
		wxStaticText* m_staticText4;
		wxSlider* m_slider_2D_angle_rot;
		wxStaticText* m_staticText5;
		wxSpinCtrl* m_spinCtrl1;
		wxSpinCtrl* m_spinCtrl2;
		wxCheckBox* m_checkBox_2D_use_middle_of_image;
		wxStaticText* m_staticText6;
		wxSlider* m_slider_2D_skew_x;
		wxStaticText* m_staticText7;
		wxSlider* m_slider_2D_skew_y;
		wxPanel* m_panel_TAB3D;
		wxRadioBox* m_radioBox_3D_choose_axis;
		wxStaticText* m_staticText8;
		wxSpinCtrlDouble* m_spinCtrlDouble_3D_vx;
		wxSpinCtrlDouble* m_spinCtrlDouble_3D_vy;
		wxSpinCtrlDouble* m_spinCtrlDouble_3D_vz;
		wxStaticText* m_staticText9;
		wxSlider* m_slider_3D_angle_rot;
		wxStaticText* m_staticText10;
		wxSlider* m_slider_3D_focal_len;
		wxStaticText* m_staticText11;
		wxSlider* m_slider_3D_distance_from_obj;
		wxPanel* m_panel_TABLENS;
		wxCheckBox* m_checkBox_LENS_advanced_model;
		wxStaticText* m_staticText12;
		wxSlider* m_slider_LENS_alpha;
		wxStaticText* m_staticText16;
		wxSpinCtrl* m_spinCtrl_LENS_center_x;
		wxSpinCtrl* m_spinCtrl_LENS_center_y;
		wxCheckBox* m_checkBox_LENS_use_middle_of_image;
		wxStaticText* m_staticText13;
		wxSpinCtrlDouble* m_spinCtrlDouble_LENS_k1;
		wxSpinCtrlDouble* m_spinCtrlDouble_LENS_k2;
		wxPanel* m_panel_TABGRID;
		wxCheckBox* m_checkBox_GRID_show_gird_deform;
		wxStaticText* m_staticText14;
		wxSpinCtrl* m_spinCtrl_GRID_node_columns;
		wxSpinCtrl* m_spinCtrl_GRID_node_rows;
		wxButton* m_button_GRID_reset_nodes;
		wxButton* m_button_GRID_apply_deformation;

		// Virtual event handlers, override them in your derived class
		virtual void m_panel_IMAGEOnLeftDown( wxMouseEvent& event ) { event.Skip(); }
		virtual void m_panel_IMAGEOnLeftUp( wxMouseEvent& event ) { event.Skip(); }
		virtual void m_panel_IMAGEOnMotion( wxMouseEvent& event ) { event.Skip(); }
		virtual void m_panel_IMAGEOnPaint( wxPaintEvent& event ) { event.Skip(); }
		virtual void m_panel_IMAGEOnSize( wxSizeEvent& event ) { event.Skip(); }
		virtual void m_button1_SAVEOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_button2_LOADOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_button3_RESETOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_slider_2D_angle_rotOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_spinCtrl1OnSpinCtrl( wxSpinEvent& event ) { event.Skip(); }
		virtual void m_spinCtrl1OnSpinCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrl1OnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrl2OnSpinCtrl( wxSpinEvent& event ) { event.Skip(); }
		virtual void m_spinCtrl2OnSpinCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrl2OnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_checkBox_2D_use_middle_of_imageOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_slider_2D_skew_xOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_2D_skew_yOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_radioBox_3D_choose_axisOnRadioBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlDouble_3D_vxOnSpinCtrlDouble( wxSpinDoubleEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlDouble_3D_vxOnSpinCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlDouble_3D_vxOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlDouble_3D_vyOnSpinCtrlDouble( wxSpinDoubleEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlDouble_3D_vyOnSpinCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlDouble_3D_vyOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlDouble_3D_vzOnSpinCtrlDouble( wxSpinDoubleEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlDouble_3D_vzOnSpinCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlDouble_3D_vzOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_slider_3D_angle_rotOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_3D_focal_lenOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_3D_distance_from_objOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_checkBox_LENS_advanced_modelOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_slider_LENS_alphaOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_spinCtrl_LENS_center_xOnSpinCtrl( wxSpinEvent& event ) { event.Skip(); }
		virtual void m_spinCtrl_LENS_center_xOnSpinCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrl_LENS_center_xOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrl_LENS_center_yOnSpinCtrl( wxSpinEvent& event ) { event.Skip(); }
		virtual void m_spinCtrl_LENS_center_yOnSpinCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrl_LENS_center_yOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_checkBox_LENS_use_middle_of_imageOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlDouble_LENS_k1OnSpinCtrlDouble( wxSpinDoubleEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlDouble_LENS_k1OnSpinCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlDouble_LENS_k1OnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlDouble_LENS_k2OnSpinCtrlDouble( wxSpinDoubleEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlDouble_LENS_k2OnSpinCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrlDouble_LENS_k2OnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_checkBox_GRID_show_gird_deformOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrl_GRID_node_columnsOnSpinCtrl( wxSpinEvent& event ) { event.Skip(); }
		virtual void m_spinCtrl_GRID_node_columnsOnSpinCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrl_GRID_node_columnsOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrl_GRID_node_rowsOnSpinCtrl( wxSpinEvent& event ) { event.Skip(); }
		virtual void m_spinCtrl_GRID_node_rowsOnSpinCtrlText( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_spinCtrl_GRID_node_rowsOnTextEnter( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_button_GRID_reset_nodesOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_button_GRID_apply_deformationOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Geometrical deformations - wxWidget Project"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1100,750 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrame1();

};

