//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WloginProtocolBuff.h"

@interface QRCodeCmd : NSObject <WloginProtocolBuff>
{
    unsigned char cStx;
    unsigned char cEtx;
    unsigned short wCmd;
    unsigned char cResult;
    struct {
        unsigned short wPkgLen;
        unsigned short wCommand;
        unsigned short wServerId;
        unsigned int dwClientIP;
        unsigned short wClientPort;
        unsigned int dwConnIP;
        unsigned short wConnPort;
        unsigned int dwInterfaceIP;
        unsigned short wInterfacePort;
        unsigned char cProcessSeq;
        unsigned char cDbID;
        unsigned short wPad;
    } stDBPkgHead;
    struct {
        unsigned short wVersion;
        unsigned int dwSeq;
        unsigned long long ddwUin;
    } stCldPkgHead;
}

@property unsigned char cResult; // @synthesize cResult;
@property unsigned short wCmd; // @synthesize wCmd;
@property unsigned char cEtx; // @synthesize cEtx;
@property unsigned char cStx; // @synthesize cStx;
- (unsigned long long)PkgUin;
- (void)SetPkgUin:(unsigned long long)arg1;
- (unsigned int)PkgClientIP;
- (void)SetPkgClientIP:(unsigned int)arg1;
- (unsigned short)PkgCmd;
- (void)SetPkgCmd:(unsigned short)arg1;
- (unsigned short)PkgLen;
- (void)SetPkgLen:(unsigned short)arg1;
- (int)encode:(id)arg1;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (int)encodeQRCodeCldPkgHead:(id)arg1;
- (int)decodeQRCodeCldPkgHead:(char **)arg1 andBuffLen:(int *)arg2;
- (int)encodeQRCodeDBPkgHead:(id)arg1;
- (int)decodeQRCodeDBPkgHead:(char **)arg1 andBuffLen:(int *)arg2;
- (id)init;

@end

