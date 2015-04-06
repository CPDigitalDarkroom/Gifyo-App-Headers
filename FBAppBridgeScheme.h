//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FBAppBridgeScheme : NSObject
{
    NSString *_version;
}

+ (id)installedFBNativeAppVersionForMethod:(id)arg1 minVersion:(id)arg2;
+ (id)urlForMethod:(id)arg1 queryParams:(id)arg2 schemeVersion:(id)arg3 version:(id)arg4;
+ (BOOL)isSupportedScheme:(id)arg1;
+ (id)bridgeSchemeForFBMessengerForOpenGraphActionShareDialogParams:(id)arg1;
+ (id)bridgeSchemeForFBMessengerForShareDialogPhotos;
+ (id)bridgeSchemeForFBMessengerForShareDialogParams:(id)arg1;
+ (id)bridgeSchemeForFBAppForLike;
+ (id)bridgeSchemeForFBAppForOpenGraphActionShareDialogParams:(id)arg1;
+ (id)bridgeSchemeForFBAppForShareDialogPhotos;
+ (id)bridgeSchemeForFBAppForShareDialogParams:(id)arg1;
+ (id)bridgeVersions;
+ (id)schemePrefix;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (id)urlForMethod:(id)arg1 queryParams:(id)arg2;
- (void)dealloc;
- (id)initWithVersion:(id)arg1;

@end
