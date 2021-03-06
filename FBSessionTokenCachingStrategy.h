//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBKeychainStore, NSString;

@interface FBSessionTokenCachingStrategy : NSObject
{
    NSString *_accessTokenInformationKeyName;
    FBKeychainStore *_keychainStore;
}

+ (id)nullCacheInstance;
+ (id)defaultInstance;
+ (BOOL)isValidTokenInformation:(id)arg1;
- (id)fetchFBAccessTokenData;
- (void)cacheFBAccessTokenData:(id)arg1;
- (void)clearToken;
- (id)fetchTokenInformation;
- (void)cacheTokenInformation:(id)arg1;
- (id)userDefaultsKeyForKeychainValidation;
- (id)keychainStore;
- (void)dealloc;
- (id)initWithUserDefaultTokenInformationKeyName:(id)arg1;
- (id)init;

@end

