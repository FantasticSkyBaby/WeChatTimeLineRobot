/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSData, NSString, BaseRequest;

@interface GameCreateChatRoomRequest : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSData* userName;
@property(retain, nonatomic) NSData* chatRoomName;
@property(retain, nonatomic) NSString* groupId;
@property(retain, nonatomic) NSString* appId;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end
