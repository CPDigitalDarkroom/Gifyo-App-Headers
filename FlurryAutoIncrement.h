//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface FlurryAutoIncrement : NSObject
{
    NSMutableDictionary *counters;
}

+ (id)instance;
@property(retain, nonatomic) NSMutableDictionary *counters; // @synthesize counters;
- (void)dealloc;
- (void)resetAll;
- (int)nextCountFor:(int)arg1;
- (id)init;

@end

