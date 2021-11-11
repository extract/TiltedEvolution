#pragma once

struct ScriptAnimationEvent
{
    ScriptAnimationEvent(uint32_t aFormID, String aAnimation, String aEventName) 
        : FormID(aFormID), Animation(aAnimation), EventName(aEventName)
    {}

    uint32_t FormID;
    String Animation;
    String EventName;
};
