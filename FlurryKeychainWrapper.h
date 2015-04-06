//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FlurryKeychainWrapper : NSObject
{
    NSString *identifier;
}

+ (id)keychainWrapperWithIdentifier:(id)arg1;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
- (void)removeObjectForKey:(id)arg1;
- (BOOL)updateValueData:(id)arg1 forKey:(id)arg2;
- (BOOL)setData:(id)arg1 forKey:(id)arg2;
- (BOOL)setString:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (BOOL)setObject:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)setupSearchForKey:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end
