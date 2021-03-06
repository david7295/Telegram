#import <Foundation/Foundation.h>

#import "TLObject.h"
#import "TLMetaRpc.h"

@class TLInputPeer;
@class TLmessages_Messages;

@interface TLRPCmessages_getUnreadMentions : TLMetaRpc

@property (nonatomic, retain) TLInputPeer *peer;
@property (nonatomic) int32_t offset_id;
@property (nonatomic) int32_t add_offset;
@property (nonatomic) int32_t limit;
@property (nonatomic) int32_t max_id;
@property (nonatomic) int32_t min_id;

- (Class)responseClass;

- (int)impliedResponseSignature;

@end

@interface TLRPCmessages_getUnreadMentions$messages_getUnreadMentions : TLRPCmessages_getUnreadMentions


@end

