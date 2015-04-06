//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBGraphObjectPagingLoader, NSDictionary, NSError, NSString;

@protocol FBGraphObjectPagingLoaderDelegate <NSObject>

@optional
- (void)pagingLoaderWasCancelled:(FBGraphObjectPagingLoader *)arg1;
- (void)pagingLoader:(FBGraphObjectPagingLoader *)arg1 handleError:(NSError *)arg2;
- (void)pagingLoaderDidFinishLoading:(FBGraphObjectPagingLoader *)arg1;
- (void)pagingLoader:(FBGraphObjectPagingLoader *)arg1 didLoadData:(NSDictionary *)arg2;
- (void)pagingLoader:(FBGraphObjectPagingLoader *)arg1 willLoadURL:(NSString *)arg2;
@end

