//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FlurryDataSenderBase.h"

#import "FlurryHttpAsyncTaskDelegate.h"

@class FlurryDataSenderIndex, NSString;

@interface FlurryDataSender : FlurryDataSenderBase <FlurryHttpAsyncTaskDelegate>
{
    FlurryDataSenderIndex *_dataIndex;
}

+ (id)dataKey;
+ (Class)httpAsyncTaskClass;
+ (void)cleanup;
+ (id)instance;
+ (void)setupInstanceWithQueue:(struct dispatch_queue_s *)arg1;
@property(retain, nonatomic) FlurryDataSenderIndex *dataIndex; // @synthesize dataIndex=_dataIndex;
- (void)retransmitNotSentBlocks;
- (void)didCompleteAllTasks;
- (void)parseResponse:(id)arg1;
- (int)parseCookies:(id)arg1;
- (void)requestSuccessComplete:(id)arg1 withResponse:(id)arg2;
- (void)requestSuccessful:(id)arg1 withResponse:(id)arg2;
- (void)requestDidCancel:(id)arg1 withResponse:(id)arg2;
- (void)requestDidFail:(id)arg1 withResponse:(id)arg2;
- (void)sendSessionsData:(id)arg1;
- (void)sendData:(id)arg1 withIdentifier:(id)arg2;
- (BOOL)everSentReportSuccessfully;
- (void)removeStoredDataWithIdentifier:(id)arg1;
- (id)storeData:(id)arg1;
- (void)setup;
- (void)dealloc;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

