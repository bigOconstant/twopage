//
// Page2.xaml.cpp
// Implementation of the Page2 class
//

#include "pch.h"
#include "Page2.xaml.h"
#include "Page1.xaml.h"
#include <windows.foundation.h>
#include <winrt/Windows.UI.Xaml.Interop.h>

using namespace twopage;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=234238

Page2::Page2()
{
	InitializeComponent();
}

void Page2::HyperlinkButton_Click(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args)
{
	Frame().Navigate(winrt::xaml_typename<twopage::Page1>());
}
