//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface IDA4APacket : NSObject
{
    BOOL _urgent;
    unsigned int _length;
    unsigned int _connectionId;
    int _type;
    NSData *_payload;
    unsigned int _remoteAcceptPort;
}

+ (BOOL)isValidAcceptPort:(unsigned short)arg1;
+ (BOOL)isValidPacketType:(unsigned short)arg1;
+ (BOOL)isAcceptPort:(unsigned short)arg1 validForPacketType:(unsigned short)arg2;
+ (BOOL)payloadLength:(unsigned short)arg1 matchesPacketType:(int)arg2;
+ (BOOL)isValidHeaderData:(id)arg1;
+ (id)packetWithData:(id)arg1;
+ (id)echoClosePacket;
+ (id)echoOpenPacket;
+ (id)echoDataPacket:(id)arg1;
+ (id)echoDataPacket;
+ (id)dataAcceptedPacketWithBytesAccepted:(unsigned int)arg1;
+ (id)selectProtocolPacket;
+ (id)closePacketWithConnectionId:(unsigned int)arg1;
+ (id)dataPacketWithConnectionId:(unsigned int)arg1 payload:(id)arg2;
+ (id)openPacketWithConnectionId:(unsigned int)arg1;
+ (id)validAcceptPortsForPacketTypes;
+ (id)validAcceptPorts;
+ (id)validPacketTypes;
@property unsigned int remoteAcceptPort; // @synthesize remoteAcceptPort=_remoteAcceptPort;
@property(readonly, copy) NSData *payload; // @synthesize payload=_payload;
@property(readonly) BOOL urgent; // @synthesize urgent=_urgent;
@property(readonly) int type; // @synthesize type=_type;
@property(readonly) unsigned int connectionId; // @synthesize connectionId=_connectionId;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
@property(readonly) unsigned int length; // @synthesize length=_length;
- (id)initWithPacketType:(int)arg1 connectionId:(unsigned int)arg2 remoteAcceptPort:(unsigned int)arg3 urgent:(BOOL)arg4 payload:(id)arg5;
- (id)dataWithPacket;

@end

