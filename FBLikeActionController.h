//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBRequestConnectionDelegate.h"
#import "NSCoding.h"
#import "NSDiscardableContent.h"

@class FBSession, NSString;

@interface FBLikeActionController : NSObject <FBRequestConnectionDelegate, NSCoding, NSDiscardableContent>
{
    unsigned int _contentAccessCount;
    FBSession *_session;
    unsigned int _refreshState;
    BOOL _objectIsLiked;
    BOOL _contentDiscarded;
    BOOL _objectIsLikedIsPending;
    BOOL _objectIsLikedOnServer;
    BOOL _objectIsPage;
    NSString *_objectID;
    NSString *_likeCountStringWithLike;
    NSString *_likeCountStringWithoutLike;
    NSString *_socialSentenceWithLike;
    NSString *_socialSentenceWithoutLike;
    NSString *_unlikeToken;
    NSString *_verifiedObjectID;
}

+ (id)likeActionControllerForObjectID:(id)arg1;
+ (BOOL)isDisabled;
@property(copy, nonatomic) NSString *verifiedObjectID; // @synthesize verifiedObjectID=_verifiedObjectID;
@property(copy, nonatomic) NSString *unlikeToken; // @synthesize unlikeToken=_unlikeToken;
@property(copy, nonatomic) NSString *socialSentenceWithoutLike; // @synthesize socialSentenceWithoutLike=_socialSentenceWithoutLike;
@property(copy, nonatomic) NSString *socialSentenceWithLike; // @synthesize socialSentenceWithLike=_socialSentenceWithLike;
@property(nonatomic) BOOL objectIsPage; // @synthesize objectIsPage=_objectIsPage;
@property(nonatomic) BOOL objectIsLikedOnServer; // @synthesize objectIsLikedOnServer=_objectIsLikedOnServer;
@property(nonatomic) BOOL objectIsLikedIsPending; // @synthesize objectIsLikedIsPending=_objectIsLikedIsPending;
@property(copy, nonatomic) NSString *likeCountStringWithoutLike; // @synthesize likeCountStringWithoutLike=_likeCountStringWithoutLike;
@property(copy, nonatomic) NSString *likeCountStringWithLike; // @synthesize likeCountStringWithLike=_likeCountStringWithLike;
@property(nonatomic, getter=isContentDiscarded) BOOL contentDiscarded; // @synthesize contentDiscarded=_contentDiscarded;
@property(nonatomic) BOOL objectIsLiked; // @synthesize objectIsLiked=_objectIsLiked;
@property(readonly, copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
- (BOOL)_useOGLike;
- (void)_updateWithObjectIsLiked:(BOOL)arg1 likeCountStringWithLike:(id)arg2 likeCountStringWithoutLike:(id)arg3 socialSentenceWithLike:(id)arg4 socialSentenceWithoutLike:(id)arg5 unlikeToken:(id)arg6 soundEnabled:(BOOL)arg7 animated:(BOOL)arg8 deferred:(BOOL)arg9;
- (void)_setExecuting:(BOOL)arg1 forKey:(id)arg2;
- (void)_serialize;
- (void)_refreshWithMode:(unsigned int)arg1;
- (void)_publishUnlikeWithUpdateBlock:(CDUnknownBlockType)arg1 analyticsParameters:(id)arg2;
- (void)_publishLikeWithUpdateBlock:(CDUnknownBlockType)arg1 analyticsParameters:(id)arg2;
- (void)_publishIfNeededWithUpdateBlock:(CDUnknownBlockType)arg1 analyticsParameters:(id)arg2;
- (void)_presentLikeDialogWithUpdateBlock:(CDUnknownBlockType)arg1 analyticsParameters:(id)arg2;
- (void)_ensureVerifiedObjectID:(CDUnknownBlockType)arg1;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (BOOL)beginContentAccess;
- (void)toggleLikeWithSoundEnabled:(BOOL)arg1 analyticsParameters:(id)arg2;
- (void)refresh;
@property(readonly, copy, nonatomic) NSString *socialSentence;
@property(readonly, copy, nonatomic) NSString *likeCountString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithObjectID:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

