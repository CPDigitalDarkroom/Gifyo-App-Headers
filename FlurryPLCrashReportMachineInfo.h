//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FlurryPLCrashReportProcessorInfo, NSString;

@interface FlurryPLCrashReportMachineInfo : NSObject
{
    NSString *_modelName;
    FlurryPLCrashReportProcessorInfo *_processorInfo;
    unsigned int _processorCount;
    unsigned int _logicalProcessorCount;
}

@property(readonly, nonatomic) unsigned int logicalProcessorCount; // @synthesize logicalProcessorCount=_logicalProcessorCount;
@property(readonly, nonatomic) unsigned int processorCount; // @synthesize processorCount=_processorCount;
@property(readonly, nonatomic) FlurryPLCrashReportProcessorInfo *processorInfo; // @synthesize processorInfo=_processorInfo;
@property(readonly, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
- (void)dealloc;
- (id)initWithModelName:(id)arg1 processorInfo:(id)arg2 processorCount:(unsigned int)arg3 logicalProcessorCount:(unsigned int)arg4;

@end

