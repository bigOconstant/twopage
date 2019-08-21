//
// Page2.xaml.h
// Declaration of the Page2 class
//

#pragma once

#include "Page2.g.h"
#include "Page1.xaml.h"
#include <winrt/Windows.UI.Xaml.Interop.h>
#include <windows.foundation.h>
namespace twopage
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class Page2 sealed
	{
	public:
		Page2();
		void HyperlinkButton_Click(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
	};
}
