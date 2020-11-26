/**
 * Error codes to return
 */

#ifndef STATUS_ERROR_CODES_H
#define STATUS_ERROR_CODES_H

/**
 * Success
 */
#define NETWORK_ERROR_SUCCESS 1

/**
 * End of file
 */
#define NETWORK_ERROR_END_OF_FILE 136

/**
 * A fatal error
 */
#define NETWORK_ERROR_GENERAL 144

/**
 * Command not implemented
 */
#define NETWORK_ERROR_NOT_IMPLEMENTED 146

/**
 * No space left on device
 */
#define NETWORK_ERROR_NO_SPACE_ON_DEVICE 162

/**
 * An invalid devicespec was given
 */
#define NETWORK_ERROR_INVALID_DEVICESPEC 165

/**
 * Access denied
 */
#define NETWORK_ERROR_ACCESS_DENIED 167

/**
 * Network error, file not found
 */
#define NETWORK_ERROR_FILE_NOT_FOUND 170

/**
 * A connection was either refused or not possible
 */
#define NETWORK_ERROR_CONNECTION_REFUSED 200

/**
 * Network unreachable
 */
#define NETWORK_ERROR_NETWORK_UNREACHABLE 201

/**
 * Network Socket Timeout
 */
#define NETWORK_ERROR_SOCKET_TIMEOUT 202

/**
 * Network Down
 */
#define NETWORK_ERROR_NETWORK_DOWN 203

/**
 * Connection was reset
 */
#define NETWORK_ERROR_CONNECTION_RESET 204

/**
 * Connection already in progress
 */
#define NETWORK_ERROR_CONNECTION_ALREADY_IN_PROGRESS 205

/**
 * Address in use
 */
#define NETWORK_ERROR_ADDRESS_IN_USE 206

/**
 * Not connected.
 */
#define NETWORK_ERROR_NOT_CONNECTED 207

/**
 * Server not running (server returned NULL)
 */
#define NETWORK_ERROR_SERVER_NOT_RUNNING 208

/**
 * No connection waiting
 */
#define NETWORK_ERROR_NO_CONNECTION_WAITING 209

/**
 * Could not allocate buffers
 */
#define NETWORK_ERROR_COULD_NOT_ALLOCATE_BUFFERS 255

#endif /* STATUS_ERROR_CODES */