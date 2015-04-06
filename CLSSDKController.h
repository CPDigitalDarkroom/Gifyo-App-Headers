//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLSSettings, CLSSettingsClient, NSDictionary, NSString, UIAlertView;

@interface CLSSDKController : NSObject
{
    id <CLSSDKControllerDelegate> _delegate;
    CLSSettingsClient *_settingsClient;
    CLSSettings *_settings;
    NSString *_cachePath;
    unsigned long long _retryInterval;
    BOOL _retrying;
    int _sendButtonIndex;
    int _alwaysSendButtonIndex;
    UIAlertView *_crashReportSubmissionAlert;
    struct dispatch_queue_s *_queue;
    double _delay;
}

@property(nonatomic) id <CLSSDKControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CLSSettingsClient *settingsClient; // @synthesize settingsClient=_settingsClient;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)submitInvalidFiles;
- (void)submitFiles;
- (void)ignoreReports;
- (void)movePreparedToSendableAndSubmitSettingAlwaysFlag:(BOOL)arg1;
- (void)displayPermissionAlert;
- (id)processRecordFile:(id)arg1;
- (void)processExistingRecords:(BOOL)arg1;
- (void)configure:(BOOL)arg1;
- (void)startReportCollection;
- (void)loadSettings:(CDUnknownBlockType)arg1;
- (void)startReportingAfterDelay:(double)arg1;
- (BOOL)beginStartupFlowAfterDelay:(double)arg1;
- (void)didLoadSettings:(id)arg1;
- (BOOL)shouldLoadSettings;
- (BOOL)isFirstLaunchForThisBuild;
- (void)onboardOrStartReportColletion;
- (BOOL)setup;
- (BOOL)ensureReasonableFileAtPath:(id)arg1;
- (void)enumerateFilesInDirectory:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)moveItemsFromDirectory:(id)arg1 toDirectory:(id)arg2;
- (BOOL)removeItemAtPath:(id)arg1;
- (BOOL)moveItemAtPath:(id)arg1 toDirectory:(id)arg2;
- (BOOL)createDirectoryAtPath:(id)arg1;
- (id)settingsCachePath;
@property(readonly, copy, nonatomic) NSString *analyticsDirectory;
@property(readonly, copy, nonatomic) NSString *crashMarkerFilePath;
@property(readonly, copy, nonatomic) NSString *sendableDirectory;
@property(readonly, copy, nonatomic) NSString *preparedDirectory;
@property(readonly, copy, nonatomic) NSString *invalidDirectory;
@property(readonly, copy, nonatomic) NSString *processingDirectory;
@property(readonly, copy, nonatomic) NSString *crashFileDirectory;
- (id)cachePath;
- (id)rootPath;
- (BOOL)isARejectedError:(id)arg1;
@property(readonly, nonatomic) BOOL hostCanCacheSettings;
@property(readonly, retain, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *settingsEndpoint;
@property(readonly, retain, nonatomic) NSDictionary *appInfoDictionary;
- (void)dealloc;
- (id)init;

@end

