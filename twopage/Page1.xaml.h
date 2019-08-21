//
// Page1.xaml.h
// Declaration of the Page1 class
//

#pragma once

#include "Page1.g.h"
#include "Page2.xaml.h"
#include <windows.foundation.h>
#include <winrt/Windows.UI.Xaml.Interop.h>
namespace twopage
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class Page1 sealed
	{
	public:
		Page1();
		void HyperlinkButton_Click(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
	};
}
