///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	m_panel_IMAGE = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizer1->Add( m_panel_IMAGE, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	m_button1_SAVE = new wxButton( this, wxID_ANY, _("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_button1_SAVE, 1, wxALL|wxEXPAND, 5 );

	m_button2_LOAD = new wxButton( this, wxID_ANY, _("Load"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_button2_LOAD, 1, wxALL|wxEXPAND, 5 );

	m_button3_RESET = new wxButton( this, wxID_ANY, _("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_button3_RESET, 1, wxALL|wxEXPAND, 5 );


	bSizer2->Add( bSizer3, 0, wxEXPAND, 5 );

	m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel_TAB2D = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );


	bSizer4->Add( 0, 10, 0, wxEXPAND, 5 );

	m_staticText4 = new wxStaticText( m_panel_TAB2D, wxID_ANY, _("Angle of rotation [°]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer4->Add( m_staticText4, 0, wxALL, 5 );

	m_slider_2D_angle_rot = new wxSlider( m_panel_TAB2D, wxID_ANY, 0, -180, 180, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer4->Add( m_slider_2D_angle_rot, 0, wxALL|wxEXPAND, 5 );


	bSizer4->Add( 0, 10, 0, wxEXPAND, 5 );

	m_staticText5 = new wxStaticText( m_panel_TAB2D, wxID_ANY, _("Center of rotation X Y: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer4->Add( m_staticText5, 0, wxALL, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	m_spinCtrl1 = new wxSpinCtrl( m_panel_TAB2D, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 4000, 0 );
	bSizer5->Add( m_spinCtrl1, 1, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );

	m_spinCtrl2 = new wxSpinCtrl( m_panel_TAB2D, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 4000, 0 );
	bSizer5->Add( m_spinCtrl2, 1, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );


	bSizer4->Add( bSizer5, 0, wxEXPAND, 5 );


	bSizer4->Add( 0, 20, 0, wxEXPAND, 5 );

	m_checkBox_2D_use_middle_of_image = new wxCheckBox( m_panel_TAB2D, wxID_ANY, _("Use middle of image"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBox_2D_use_middle_of_image->SetValue(true);
	bSizer4->Add( m_checkBox_2D_use_middle_of_image, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer4->Add( 0, 20, 0, wxEXPAND, 5 );

	m_staticText6 = new wxStaticText( m_panel_TAB2D, wxID_ANY, _("Angle of skew (Skew X) [°]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer4->Add( m_staticText6, 0, wxALL, 5 );

	m_slider_2D_skew_x = new wxSlider( m_panel_TAB2D, wxID_ANY, 0, -89, 89, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer4->Add( m_slider_2D_skew_x, 0, wxALL|wxEXPAND, 5 );

	m_staticText7 = new wxStaticText( m_panel_TAB2D, wxID_ANY, _("Angle of skew (Skew Y) [°]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer4->Add( m_staticText7, 0, wxALL, 5 );

	m_slider_2D_skew_y = new wxSlider( m_panel_TAB2D, wxID_ANY, 0, -89, 89, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer4->Add( m_slider_2D_skew_y, 0, wxALL|wxEXPAND, 5 );


	m_panel_TAB2D->SetSizer( bSizer4 );
	m_panel_TAB2D->Layout();
	bSizer4->Fit( m_panel_TAB2D );
	m_notebook1->AddPage( m_panel_TAB2D, _("2D Rotation and skew"), true );
	m_panel_TAB3D = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );


	bSizer6->Add( 0, 10, 0, wxEXPAND, 5 );

	wxString m_radioBox_3D_choose_axisChoices[] = { _("X axis"), _("Y axis"), _("Any vector direction") };
	int m_radioBox_3D_choose_axisNChoices = sizeof( m_radioBox_3D_choose_axisChoices ) / sizeof( wxString );
	m_radioBox_3D_choose_axis = new wxRadioBox( m_panel_TAB3D, wxID_ANY, _("Choose axis of rotation"), wxDefaultPosition, wxDefaultSize, m_radioBox_3D_choose_axisNChoices, m_radioBox_3D_choose_axisChoices, 1, wxRA_SPECIFY_COLS );
	m_radioBox_3D_choose_axis->SetSelection( 0 );
	bSizer6->Add( m_radioBox_3D_choose_axis, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );


	bSizer6->Add( 0, 10, 0, wxEXPAND, 5 );

	m_staticText8 = new wxStaticText( m_panel_TAB3D, wxID_ANY, _("Any vector direction (Vx, Vy, Vz)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer6->Add( m_staticText8, 0, wxALL, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );

	m_spinCtrlDouble_3D_vx = new wxSpinCtrlDouble( m_panel_TAB3D, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -100, 100, 0, 1 );
	m_spinCtrlDouble_3D_vx->SetDigits( 4 );
	bSizer7->Add( m_spinCtrlDouble_3D_vx, 1, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );

	m_spinCtrlDouble_3D_vy = new wxSpinCtrlDouble( m_panel_TAB3D, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -100, 100, 0, 1 );
	m_spinCtrlDouble_3D_vy->SetDigits( 4 );
	bSizer7->Add( m_spinCtrlDouble_3D_vy, 1, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );

	m_spinCtrlDouble_3D_vz = new wxSpinCtrlDouble( m_panel_TAB3D, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -100, 100, 0, 1 );
	m_spinCtrlDouble_3D_vz->SetDigits( 4 );
	bSizer7->Add( m_spinCtrlDouble_3D_vz, 1, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );


	bSizer6->Add( bSizer7, 0, wxEXPAND, 5 );


	bSizer6->Add( 0, 20, 0, wxEXPAND, 5 );

	m_staticText9 = new wxStaticText( m_panel_TAB3D, wxID_ANY, _("Angle of 3D rotation [°]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer6->Add( m_staticText9, 0, wxALL, 5 );

	m_slider_3D_angle_rot = new wxSlider( m_panel_TAB3D, wxID_ANY, 0, -180, 180, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer6->Add( m_slider_3D_angle_rot, 0, wxALL|wxEXPAND, 5 );


	bSizer6->Add( 0, 10, 0, wxEXPAND, 5 );

	m_staticText10 = new wxStaticText( m_panel_TAB3D, wxID_ANY, _("Focal length (mm)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer6->Add( m_staticText10, 0, wxALL, 5 );

	m_slider_3D_focal_len = new wxSlider( m_panel_TAB3D, wxID_ANY, 50, 10, 300, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer6->Add( m_slider_3D_focal_len, 0, wxALL|wxEXPAND, 5 );

	m_staticText11 = new wxStaticText( m_panel_TAB3D, wxID_ANY, _("Distance from obejct "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer6->Add( m_staticText11, 0, wxALL, 5 );

	m_slider_3D_distance_from_obj = new wxSlider( m_panel_TAB3D, wxID_ANY, 500, 50, 2000, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer6->Add( m_slider_3D_distance_from_obj, 0, wxALL|wxEXPAND, 5 );


	m_panel_TAB3D->SetSizer( bSizer6 );
	m_panel_TAB3D->Layout();
	bSizer6->Fit( m_panel_TAB3D );
	m_notebook1->AddPage( m_panel_TAB3D, _("3D Rotation and camera"), false );
	m_panel_TABLENS = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );


	bSizer8->Add( 0, 10, 0, wxEXPAND, 5 );

	m_checkBox_LENS_advanced_model = new wxCheckBox( m_panel_TABLENS, wxID_ANY, _("Turn on advanced  model of lens"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_checkBox_LENS_advanced_model, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer8->Add( 0, 20, 0, wxEXPAND, 5 );

	m_staticText12 = new wxStaticText( m_panel_TABLENS, wxID_ANY, _("Standard alpha correction (R`= alpha * R)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer8->Add( m_staticText12, 0, wxALL, 5 );

	m_slider_LENS_alpha = new wxSlider( m_panel_TABLENS, wxID_ANY, 0, -100, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer8->Add( m_slider_LENS_alpha, 0, wxALL|wxEXPAND, 5 );


	bSizer8->Add( 0, 10, 0, wxEXPAND, 5 );

	m_staticText16 = new wxStaticText( m_panel_TABLENS, wxID_ANY, _("Center of deformation (X, Y):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	bSizer8->Add( m_staticText16, 0, wxALL, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_spinCtrl_LENS_center_x = new wxSpinCtrl( m_panel_TABLENS, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 4000, 0 );
	bSizer12->Add( m_spinCtrl_LENS_center_x, 1, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );

	m_spinCtrl_LENS_center_y = new wxSpinCtrl( m_panel_TABLENS, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 4000, 0 );
	bSizer12->Add( m_spinCtrl_LENS_center_y, 1, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );


	bSizer8->Add( bSizer12, 0, wxEXPAND, 5 );


	bSizer8->Add( 0, 20, 0, wxEXPAND, 5 );

	m_checkBox_LENS_use_middle_of_image = new wxCheckBox( m_panel_TABLENS, wxID_ANY, _("Use middle of image"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_checkBox_LENS_use_middle_of_image, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer8->Add( 0, 20, 0, wxEXPAND, 5 );

	m_staticText13 = new wxStaticText( m_panel_TABLENS, wxID_ANY, _("Correction parameter of lens (k1, k2)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer8->Add( m_staticText13, 0, wxALL, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_spinCtrlDouble_LENS_k1 = new wxSpinCtrlDouble( m_panel_TABLENS, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -10, 10, 0, 0.0001 );
	m_spinCtrlDouble_LENS_k1->SetDigits( 4 );
	bSizer9->Add( m_spinCtrlDouble_LENS_k1, 1, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );

	m_spinCtrlDouble_LENS_k2 = new wxSpinCtrlDouble( m_panel_TABLENS, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -10, 10, 0, 0.0001 );
	m_spinCtrlDouble_LENS_k2->SetDigits( 4 );
	bSizer9->Add( m_spinCtrlDouble_LENS_k2, 1, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );


	bSizer8->Add( bSizer9, 0, wxEXPAND, 5 );


	m_panel_TABLENS->SetSizer( bSizer8 );
	m_panel_TABLENS->Layout();
	bSizer8->Fit( m_panel_TABLENS );
	m_notebook1->AddPage( m_panel_TABLENS, _("Lens distortion"), false );
	m_panel_TABGRID = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );


	bSizer10->Add( 0, 10, 0, wxEXPAND, 5 );

	m_checkBox_GRID_show_gird_deform = new wxCheckBox( m_panel_TABGRID, wxID_ANY, _("Show grid of deformations"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_checkBox_GRID_show_gird_deform, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer10->Add( 0, 20, 0, wxEXPAND, 5 );

	m_staticText14 = new wxStaticText( m_panel_TABGRID, wxID_ANY, _("Amount of node columns and rows"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	bSizer10->Add( m_staticText14, 0, wxALL, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_spinCtrl_GRID_node_columns = new wxSpinCtrl( m_panel_TABGRID, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 2, 20, 4 );
	bSizer11->Add( m_spinCtrl_GRID_node_columns, 1, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );

	m_spinCtrl_GRID_node_rows = new wxSpinCtrl( m_panel_TABGRID, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 2, 20, 4 );
	bSizer11->Add( m_spinCtrl_GRID_node_rows, 1, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );


	bSizer10->Add( bSizer11, 0, wxEXPAND, 5 );


	bSizer10->Add( 0, 20, 0, wxEXPAND, 5 );

	m_button_GRID_reset_nodes = new wxButton( m_panel_TABGRID, wxID_ANY, _("Reset nodes"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_button_GRID_reset_nodes, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer10->Add( 0, 20, 0, wxEXPAND, 5 );

	m_button_GRID_apply_deformation = new wxButton( m_panel_TABGRID, wxID_ANY, _("Apply deformation of grid"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_button_GRID_apply_deformation, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	m_panel_TABGRID->SetSizer( bSizer10 );
	m_panel_TABGRID->Layout();
	bSizer10->Fit( m_panel_TABGRID );
	m_notebook1->AddPage( m_panel_TABGRID, _("Grid of points"), false );

	bSizer2->Add( m_notebook1, 1, wxEXPAND | wxALL, 5 );


	bSizer1->Add( bSizer2, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_panel_IMAGE->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( MyFrame1::m_panel_IMAGEOnLeftDown ), NULL, this );
	m_panel_IMAGE->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( MyFrame1::m_panel_IMAGEOnLeftUp ), NULL, this );
	m_panel_IMAGE->Connect( wxEVT_MOTION, wxMouseEventHandler( MyFrame1::m_panel_IMAGEOnMotion ), NULL, this );
	m_panel_IMAGE->Connect( wxEVT_PAINT, wxPaintEventHandler( MyFrame1::m_panel_IMAGEOnPaint ), NULL, this );
	m_panel_IMAGE->Connect( wxEVT_SIZE, wxSizeEventHandler( MyFrame1::m_panel_IMAGEOnSize ), NULL, this );
	m_button1_SAVE->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button1_SAVEOnButtonClick ), NULL, this );
	m_button2_LOAD->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button2_LOADOnButtonClick ), NULL, this );
	m_button3_RESET->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button3_RESETOnButtonClick ), NULL, this );
	m_slider_2D_angle_rot->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_2D_angle_rotOnScroll ), NULL, this );
	m_slider_2D_angle_rot->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_2D_angle_rotOnScroll ), NULL, this );
	m_slider_2D_angle_rot->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_2D_angle_rotOnScroll ), NULL, this );
	m_slider_2D_angle_rot->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_2D_angle_rotOnScroll ), NULL, this );
	m_slider_2D_angle_rot->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_2D_angle_rotOnScroll ), NULL, this );
	m_slider_2D_angle_rot->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_2D_angle_rotOnScroll ), NULL, this );
	m_slider_2D_angle_rot->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_2D_angle_rotOnScroll ), NULL, this );
	m_slider_2D_angle_rot->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_2D_angle_rotOnScroll ), NULL, this );
	m_slider_2D_angle_rot->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_2D_angle_rotOnScroll ), NULL, this );
	m_spinCtrl1->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( MyFrame1::m_spinCtrl1OnSpinCtrl ), NULL, this );
	m_spinCtrl1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::m_spinCtrl1OnSpinCtrlText ), NULL, this );
	m_spinCtrl1->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrame1::m_spinCtrl1OnTextEnter ), NULL, this );
	m_spinCtrl2->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( MyFrame1::m_spinCtrl2OnSpinCtrl ), NULL, this );
	m_spinCtrl2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::m_spinCtrl2OnSpinCtrlText ), NULL, this );
	m_spinCtrl2->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrame1::m_spinCtrl2OnTextEnter ), NULL, this );
	m_checkBox_2D_use_middle_of_image->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::m_checkBox_2D_use_middle_of_imageOnCheckBox ), NULL, this );
	m_slider_2D_skew_x->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_2D_skew_xOnScroll ), NULL, this );
	m_slider_2D_skew_x->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_2D_skew_xOnScroll ), NULL, this );
	m_slider_2D_skew_x->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_2D_skew_xOnScroll ), NULL, this );
	m_slider_2D_skew_x->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_2D_skew_xOnScroll ), NULL, this );
	m_slider_2D_skew_x->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_2D_skew_xOnScroll ), NULL, this );
	m_slider_2D_skew_x->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_2D_skew_xOnScroll ), NULL, this );
	m_slider_2D_skew_x->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_2D_skew_xOnScroll ), NULL, this );
	m_slider_2D_skew_x->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_2D_skew_xOnScroll ), NULL, this );
	m_slider_2D_skew_x->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_2D_skew_xOnScroll ), NULL, this );
	m_slider_2D_skew_y->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_2D_skew_yOnScroll ), NULL, this );
	m_slider_2D_skew_y->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_2D_skew_yOnScroll ), NULL, this );
	m_slider_2D_skew_y->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_2D_skew_yOnScroll ), NULL, this );
	m_slider_2D_skew_y->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_2D_skew_yOnScroll ), NULL, this );
	m_slider_2D_skew_y->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_2D_skew_yOnScroll ), NULL, this );
	m_slider_2D_skew_y->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_2D_skew_yOnScroll ), NULL, this );
	m_slider_2D_skew_y->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_2D_skew_yOnScroll ), NULL, this );
	m_slider_2D_skew_y->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_2D_skew_yOnScroll ), NULL, this );
	m_slider_2D_skew_y->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_2D_skew_yOnScroll ), NULL, this );
	m_radioBox_3D_choose_axis->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( MyFrame1::m_radioBox_3D_choose_axisOnRadioBox ), NULL, this );
	m_spinCtrlDouble_3D_vx->Connect( wxEVT_COMMAND_SPINCTRLDOUBLE_UPDATED, wxSpinDoubleEventHandler( MyFrame1::m_spinCtrlDouble_3D_vxOnSpinCtrlDouble ), NULL, this );
	m_spinCtrlDouble_3D_vx->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::m_spinCtrlDouble_3D_vxOnSpinCtrlText ), NULL, this );
	m_spinCtrlDouble_3D_vx->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrame1::m_spinCtrlDouble_3D_vxOnTextEnter ), NULL, this );
	m_spinCtrlDouble_3D_vy->Connect( wxEVT_COMMAND_SPINCTRLDOUBLE_UPDATED, wxSpinDoubleEventHandler( MyFrame1::m_spinCtrlDouble_3D_vyOnSpinCtrlDouble ), NULL, this );
	m_spinCtrlDouble_3D_vy->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::m_spinCtrlDouble_3D_vyOnSpinCtrlText ), NULL, this );
	m_spinCtrlDouble_3D_vy->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrame1::m_spinCtrlDouble_3D_vyOnTextEnter ), NULL, this );
	m_spinCtrlDouble_3D_vz->Connect( wxEVT_COMMAND_SPINCTRLDOUBLE_UPDATED, wxSpinDoubleEventHandler( MyFrame1::m_spinCtrlDouble_3D_vzOnSpinCtrlDouble ), NULL, this );
	m_spinCtrlDouble_3D_vz->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::m_spinCtrlDouble_3D_vzOnSpinCtrlText ), NULL, this );
	m_spinCtrlDouble_3D_vz->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrame1::m_spinCtrlDouble_3D_vzOnTextEnter ), NULL, this );
	m_slider_3D_angle_rot->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_3D_angle_rotOnScroll ), NULL, this );
	m_slider_3D_angle_rot->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_3D_angle_rotOnScroll ), NULL, this );
	m_slider_3D_angle_rot->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_3D_angle_rotOnScroll ), NULL, this );
	m_slider_3D_angle_rot->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_3D_angle_rotOnScroll ), NULL, this );
	m_slider_3D_angle_rot->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_3D_angle_rotOnScroll ), NULL, this );
	m_slider_3D_angle_rot->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_3D_angle_rotOnScroll ), NULL, this );
	m_slider_3D_angle_rot->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_3D_angle_rotOnScroll ), NULL, this );
	m_slider_3D_angle_rot->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_3D_angle_rotOnScroll ), NULL, this );
	m_slider_3D_angle_rot->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_3D_angle_rotOnScroll ), NULL, this );
	m_slider_3D_focal_len->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_3D_focal_lenOnScroll ), NULL, this );
	m_slider_3D_focal_len->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_3D_focal_lenOnScroll ), NULL, this );
	m_slider_3D_focal_len->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_3D_focal_lenOnScroll ), NULL, this );
	m_slider_3D_focal_len->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_3D_focal_lenOnScroll ), NULL, this );
	m_slider_3D_focal_len->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_3D_focal_lenOnScroll ), NULL, this );
	m_slider_3D_focal_len->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_3D_focal_lenOnScroll ), NULL, this );
	m_slider_3D_focal_len->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_3D_focal_lenOnScroll ), NULL, this );
	m_slider_3D_focal_len->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_3D_focal_lenOnScroll ), NULL, this );
	m_slider_3D_focal_len->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_3D_focal_lenOnScroll ), NULL, this );
	m_slider_3D_distance_from_obj->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_3D_distance_from_objOnScroll ), NULL, this );
	m_slider_3D_distance_from_obj->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_3D_distance_from_objOnScroll ), NULL, this );
	m_slider_3D_distance_from_obj->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_3D_distance_from_objOnScroll ), NULL, this );
	m_slider_3D_distance_from_obj->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_3D_distance_from_objOnScroll ), NULL, this );
	m_slider_3D_distance_from_obj->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_3D_distance_from_objOnScroll ), NULL, this );
	m_slider_3D_distance_from_obj->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_3D_distance_from_objOnScroll ), NULL, this );
	m_slider_3D_distance_from_obj->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_3D_distance_from_objOnScroll ), NULL, this );
	m_slider_3D_distance_from_obj->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_3D_distance_from_objOnScroll ), NULL, this );
	m_slider_3D_distance_from_obj->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_3D_distance_from_objOnScroll ), NULL, this );
	m_checkBox_LENS_advanced_model->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::m_checkBox_LENS_advanced_modelOnCheckBox ), NULL, this );
	m_slider_LENS_alpha->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_LENS_alphaOnScroll ), NULL, this );
	m_slider_LENS_alpha->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_LENS_alphaOnScroll ), NULL, this );
	m_slider_LENS_alpha->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_LENS_alphaOnScroll ), NULL, this );
	m_slider_LENS_alpha->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_LENS_alphaOnScroll ), NULL, this );
	m_slider_LENS_alpha->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_LENS_alphaOnScroll ), NULL, this );
	m_slider_LENS_alpha->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_LENS_alphaOnScroll ), NULL, this );
	m_slider_LENS_alpha->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_LENS_alphaOnScroll ), NULL, this );
	m_slider_LENS_alpha->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_LENS_alphaOnScroll ), NULL, this );
	m_slider_LENS_alpha->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_LENS_alphaOnScroll ), NULL, this );
	m_spinCtrl_LENS_center_x->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( MyFrame1::m_spinCtrl_LENS_center_xOnSpinCtrl ), NULL, this );
	m_spinCtrl_LENS_center_x->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::m_spinCtrl_LENS_center_xOnSpinCtrlText ), NULL, this );
	m_spinCtrl_LENS_center_x->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrame1::m_spinCtrl_LENS_center_xOnTextEnter ), NULL, this );
	m_spinCtrl_LENS_center_y->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( MyFrame1::m_spinCtrl_LENS_center_yOnSpinCtrl ), NULL, this );
	m_spinCtrl_LENS_center_y->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::m_spinCtrl_LENS_center_yOnSpinCtrlText ), NULL, this );
	m_spinCtrl_LENS_center_y->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrame1::m_spinCtrl_LENS_center_yOnTextEnter ), NULL, this );
	m_checkBox_LENS_use_middle_of_image->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::m_checkBox_LENS_use_middle_of_imageOnCheckBox ), NULL, this );
	m_spinCtrlDouble_LENS_k1->Connect( wxEVT_COMMAND_SPINCTRLDOUBLE_UPDATED, wxSpinDoubleEventHandler( MyFrame1::m_spinCtrlDouble_LENS_k1OnSpinCtrlDouble ), NULL, this );
	m_spinCtrlDouble_LENS_k1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::m_spinCtrlDouble_LENS_k1OnSpinCtrlText ), NULL, this );
	m_spinCtrlDouble_LENS_k1->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrame1::m_spinCtrlDouble_LENS_k1OnTextEnter ), NULL, this );
	m_spinCtrlDouble_LENS_k2->Connect( wxEVT_COMMAND_SPINCTRLDOUBLE_UPDATED, wxSpinDoubleEventHandler( MyFrame1::m_spinCtrlDouble_LENS_k2OnSpinCtrlDouble ), NULL, this );
	m_spinCtrlDouble_LENS_k2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::m_spinCtrlDouble_LENS_k2OnSpinCtrlText ), NULL, this );
	m_spinCtrlDouble_LENS_k2->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrame1::m_spinCtrlDouble_LENS_k2OnTextEnter ), NULL, this );
	m_checkBox_GRID_show_gird_deform->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MyFrame1::m_checkBox_GRID_show_gird_deformOnCheckBox ), NULL, this );
	m_spinCtrl_GRID_node_columns->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( MyFrame1::m_spinCtrl_GRID_node_columnsOnSpinCtrl ), NULL, this );
	m_spinCtrl_GRID_node_columns->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::m_spinCtrl_GRID_node_columnsOnSpinCtrlText ), NULL, this );
	m_spinCtrl_GRID_node_columns->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrame1::m_spinCtrl_GRID_node_columnsOnTextEnter ), NULL, this );
	m_spinCtrl_GRID_node_rows->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( MyFrame1::m_spinCtrl_GRID_node_rowsOnSpinCtrl ), NULL, this );
	m_spinCtrl_GRID_node_rows->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( MyFrame1::m_spinCtrl_GRID_node_rowsOnSpinCtrlText ), NULL, this );
	m_spinCtrl_GRID_node_rows->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( MyFrame1::m_spinCtrl_GRID_node_rowsOnTextEnter ), NULL, this );
	m_button_GRID_reset_nodes->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_GRID_reset_nodesOnButtonClick ), NULL, this );
	m_button_GRID_apply_deformation->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_GRID_apply_deformationOnButtonClick ), NULL, this );
}

MyFrame1::~MyFrame1()
{
}
