//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BFExecutor : NSObject
{
    CDUnknownBlockType _block;
}

+ (id)executorWithOperationQueue:(id)arg1;
+ (id)executorWithDispatchQueue:(struct dispatch_queue_s *)arg1;
+ (id)executorWithBlock:(CDUnknownBlockType)arg1;
+ (id)mainThreadExecutor;
+ (id)immediateExecutor;
+ (id)defaultExecutor;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)execute:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

