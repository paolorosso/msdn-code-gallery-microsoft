//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
//
//*********************************************************

#pragma once

namespace SDKSample
{
    public value struct Scenario
    {
        Platform::String^ Title;
        Platform::String^ ClassName;
    };

    partial ref class MainPage
    {
    internal:
        static property Platform::String^ FEATURE_NAME 
        {
            Platform::String^ get() 
            {  
                return "SemanticTextQuery C++ Sample"; 
            }
        }

        static property Platform::Array<Scenario>^ scenarios 
        {
            Platform::Array<Scenario>^ get() 
            { 
                return scenariosInner; 
            }
        }
    private:
        static Platform::Array<Scenario>^ scenariosInner;
    };

    namespace SemanticTextQuery
    {
        void HighlightRanges(Windows::UI::Xaml::Controls::TextBlock^ tb,  Platform::String^ strText, Windows::Foundation::Collections::IVectorView<Windows::Data::Text::TextSegment>^ ranges);
    }
}
