// generated by Fast Light User Interface Designer (fluid) version 1.0106

#ifndef fgadmin_h
#define fgadmin_h
#include <string>
using std::string;

#include <FL/Fl.H>
#include <FL/Fl_Preferences.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Progress.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Check_Browser.H>

class FGAdminUI {
public:
  FGAdminUI();
  Fl_Double_Window *main_window;
private:
  inline void cb_main_window_i(Fl_Double_Window*, void*);
  static void cb_main_window(Fl_Double_Window*, void*);
public:
  Fl_Button *quit_b;
private:
  inline void cb_quit_b_i(Fl_Button*, void*);
  static void cb_quit_b(Fl_Button*, void*);
public:
  Fl_Progress *progress;
  Fl_Button *source_b;
private:
  inline void cb_source_b_i(Fl_Button*, void*);
  static void cb_source_b(Fl_Button*, void*);
public:
  Fl_Input *source_text;
  Fl_Check_Browser *install_box;
  Fl_Button *install_b;
private:
  inline void cb_install_b_i(Fl_Button*, void*);
  static void cb_install_b(Fl_Button*, void*);
public:
  Fl_Button *source_sel_all;
private:
  inline void cb_source_sel_all_i(Fl_Button*, void*);
  static void cb_source_sel_all(Fl_Button*, void*);
public:
  Fl_Button *source_desel_all;
private:
  inline void cb_source_desel_all_i(Fl_Button*, void*);
  static void cb_source_desel_all(Fl_Button*, void*);
public:
  Fl_Button *dest_b;
private:
  inline void cb_dest_b_i(Fl_Button*, void*);
  static void cb_dest_b(Fl_Button*, void*);
public:
  Fl_Input *dest_text;
  Fl_Check_Browser *remove_box;
  Fl_Button *remove_b;
private:
  inline void cb_remove_b_i(Fl_Button*, void*);
  static void cb_remove_b(Fl_Button*, void*);
public:
  Fl_Button *dest_sel_all;
private:
  inline void cb_dest_sel_all_i(Fl_Button*, void*);
  static void cb_dest_sel_all(Fl_Button*, void*);
public:
  Fl_Button *dest_desel_all;
private:
  inline void cb_dest_desel_all_i(Fl_Button*, void*);
  static void cb_dest_desel_all(Fl_Button*, void*);
public:
  ~FGAdminUI();
  void init();
  void show();
  static void step( void * );
  static void step( void *, int );
private:
  void refresh_lists();
  void quit();
  void select_install_source();
  void select_install_dest();
  void update_install_box();
  void update_remove_box();
  void install_selected();
  void remove_selected();
  void select_all_source();
  void deselect_all_source();
  void select_all_dest();
  void deselect_all_dest();
  Fl_Preferences *prefs;
  string source;
  string dest;
  string progress_label;
};
#endif
