//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CGUpnpControlPoint : NSObject
{
    struct _CgUpnpControlPoint *cObject;
    id <CGUpnpControlPointDelegate> delegate;
    NSMutableArray *devicesArray;
}

@property(retain) NSMutableArray *devicesArray; // @synthesize devicesArray;
@property id <CGUpnpControlPointDelegate> delegate; // @synthesize delegate;
@property(readonly) struct _CgUpnpControlPoint *cObject; // @synthesize cObject;
- (void)newlySearchNoCache;
- (BOOL)notifyIPChanged;
- (id)deviceForUDN:(id)arg1;
- (id)devices;
- (void)setSsdpSearchMX:(int)arg1;
- (int)ssdpSearchMX;
- (void)searchWithST:(id)arg1;
- (void)search;
- (BOOL)isRunning;
- (BOOL)stop;
- (BOOL)start;
- (void)dealloc;
- (id)init;

@end
