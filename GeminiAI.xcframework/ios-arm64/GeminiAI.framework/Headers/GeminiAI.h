//
//  GeminiAI.h
//  GeminiAI
//
//  Created by John Blaine on 10/1/24.
//

#import <Foundation/Foundation.h>

//! Project version number for GeminiAI.
FOUNDATION_EXPORT double GeminiAIVersionNumber;
FOUNDATION_EXPORT const unsigned char GeminiAIVersionString[];


NS_ASSUME_NONNULL_BEGIN

@interface GeminiAI : NSObject

- (instancetype)initWithApiKey:(NSString*)apiKey;
- (void)request:(NSString*)question response:(void(^)(NSString *result))callback;
@end

NS_ASSUME_NONNULL_END
