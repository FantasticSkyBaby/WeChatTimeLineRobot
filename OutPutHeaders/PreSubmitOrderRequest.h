/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, BaseRequest;

@interface PreSubmitOrderRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned fromScene;
@property(retain, nonatomic) NSMutableArray* product;
@property(assign, nonatomic) unsigned productCount;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end
