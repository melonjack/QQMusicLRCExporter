//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RqdLocalObjInitWithWupProtocol.h"
#import "RqdObjTransToJceBufferProtocol.h"

@class NSMutableDictionary;

@interface RqdMixPackage : NSObject <RqdObjTransToJceBufferProtocol, RqdLocalObjInitWithWupProtocol>
{
    NSMutableDictionary *mixMap;
}

@property(retain, nonatomic) NSMutableDictionary *mixMap; // @synthesize mixMap;
- (void)dealloc;
- (void)createWUPModle:(struct MixPackage *)arg1;
- (id)initWithMXWUPModel:(struct MixPackage *)arg1;
- (void)initLocalObjWithWupBuffer:(JceInputStream_dae2ee3f *)arg1;
- (void)setDataToBuffer:(JceOutputStream_6f42a06c *)arg1;

@end

