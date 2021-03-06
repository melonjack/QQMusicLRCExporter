//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTAWXOEvent.h"

#import "MTAWXOEventProtocol.h"

@class NSString;

@interface MTAWXOErrorEvent : MTAWXOEvent <MTAWXOEventProtocol>
{
    NSString *_error;
    unsigned int _attr;
    NSString *_availableMemory;
    NSString *_freeDiskSpace;
    NSString *_processName;
}

@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(retain, nonatomic) NSString *freeDiskSpace; // @synthesize freeDiskSpace=_freeDiskSpace;
@property(retain, nonatomic) NSString *availableMemory; // @synthesize availableMemory=_availableMemory;
@property unsigned int attr; // @synthesize attr=_attr;
@property(retain, nonatomic) NSString *error; // @synthesize error=_error;
- (void)dealloc;
- (id)init;
- (void)encode:(id)arg1;
- (int)getType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

