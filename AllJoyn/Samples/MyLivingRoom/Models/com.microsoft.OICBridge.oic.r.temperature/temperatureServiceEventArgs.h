//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace com { namespace microsoft { namespace OICBridge { namespace oic { namespace r { namespace temperature {

// Methods
// Readable Properties
public ref class temperatureGetRangeRequestedEventArgs sealed
{
public:
    temperatureGetRangeRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property temperatureGetRangeResult^ Result
    {
        temperatureGetRangeResult^ get() { return m_result; }
        void set(_In_ temperatureGetRangeResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<temperatureGetRangeResult^>^ GetResultAsync(temperatureGetRangeRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<temperatureGetRangeResult^>
        {
            return t;
        });
    }

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<temperatureGetRangeResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    temperatureGetRangeResult^ m_result;
};

public ref class temperatureGetTemperatureRequestedEventArgs sealed
{
public:
    temperatureGetTemperatureRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property temperatureGetTemperatureResult^ Result
    {
        temperatureGetTemperatureResult^ get() { return m_result; }
        void set(_In_ temperatureGetTemperatureResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<temperatureGetTemperatureResult^>^ GetResultAsync(temperatureGetTemperatureRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<temperatureGetTemperatureResult^>
        {
            return t;
        });
    }

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<temperatureGetTemperatureResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    temperatureGetTemperatureResult^ m_result;
};

public ref class temperatureGetUnitsRequestedEventArgs sealed
{
public:
    temperatureGetUnitsRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property temperatureGetUnitsResult^ Result
    {
        temperatureGetUnitsResult^ get() { return m_result; }
        void set(_In_ temperatureGetUnitsResult^ value) { m_result = value; }
    }

    Windows::Foundation::Deferral^ GetDeferral();

    static Windows::Foundation::IAsyncOperation<temperatureGetUnitsResult^>^ GetResultAsync(temperatureGetUnitsRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<temperatureGetUnitsResult^>
        {
            return t;
        });
    }

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<temperatureGetUnitsResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    temperatureGetUnitsResult^ m_result;
};

// Writable Properties
public ref class temperatureSetRangeRequestedEventArgs sealed
{
public:
    temperatureSetRangeRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ value);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property Platform::String^ Value
    {
        Platform::String^ get() { return m_value; }
    }

    property temperatureSetRangeResult^ Result
    {
        temperatureSetRangeResult^ get() { return m_result; }
        void set(_In_ temperatureSetRangeResult^ value) { m_result = value; }
    }

    static Windows::Foundation::IAsyncOperation<temperatureSetRangeResult^>^ GetResultAsync(temperatureSetRangeRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<temperatureSetRangeResult^>
        {
            return t;
        });
    }

    Windows::Foundation::Deferral^ GetDeferral();

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<temperatureSetRangeResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    Platform::String^ m_value;
    temperatureSetRangeResult^ m_result;
};

public ref class temperatureSetTemperatureRequestedEventArgs sealed
{
public:
    temperatureSetTemperatureRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ double value);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property double Value
    {
        double get() { return m_value; }
    }

    property temperatureSetTemperatureResult^ Result
    {
        temperatureSetTemperatureResult^ get() { return m_result; }
        void set(_In_ temperatureSetTemperatureResult^ value) { m_result = value; }
    }

    static Windows::Foundation::IAsyncOperation<temperatureSetTemperatureResult^>^ GetResultAsync(temperatureSetTemperatureRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<temperatureSetTemperatureResult^>
        {
            return t;
        });
    }

    Windows::Foundation::Deferral^ GetDeferral();

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<temperatureSetTemperatureResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    double m_value;
    temperatureSetTemperatureResult^ m_result;
};

public ref class temperatureSetUnitsRequestedEventArgs sealed
{
public:
    temperatureSetUnitsRequestedEventArgs(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ Platform::String^ value);

    property Windows::Devices::AllJoyn::AllJoynMessageInfo^ MessageInfo
    {
        Windows::Devices::AllJoyn::AllJoynMessageInfo^ get() { return m_messageInfo; }
    }

    property Platform::String^ Value
    {
        Platform::String^ get() { return m_value; }
    }

    property temperatureSetUnitsResult^ Result
    {
        temperatureSetUnitsResult^ get() { return m_result; }
        void set(_In_ temperatureSetUnitsResult^ value) { m_result = value; }
    }

    static Windows::Foundation::IAsyncOperation<temperatureSetUnitsResult^>^ GetResultAsync(temperatureSetUnitsRequestedEventArgs^ args)
    {
        args->InvokeAllFinished();
        auto t = concurrency::create_task(args->m_tce);
        return concurrency::create_async([t]() -> concurrency::task<temperatureSetUnitsResult^>
        {
            return t;
        });
    }

    Windows::Foundation::Deferral^ GetDeferral();

private:
    void Complete();
    void InvokeAllFinished();
    void InvokeCompleteHandler();

    bool m_raised;
    int m_completionsRequired;
    concurrency::task_completion_event<temperatureSetUnitsResult^> m_tce;
    std::mutex m_lock;
    Windows::Devices::AllJoyn::AllJoynMessageInfo^ m_messageInfo;
    Platform::String^ m_value;
    temperatureSetUnitsResult^ m_result;
};

} } } } } } 