

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *PCT_strings[] = {
QT_TRANSLATE_NOOP("PCT-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"-fallbackfee is set very high! This is the transaction fee you may pay when "
"fee estimates are not available."),
QT_TRANSLATE_NOOP("PCT-core", ""
"-maxtxfee is set very high! Fees this large could be paid on a single "
"transaction."),
QT_TRANSLATE_NOOP("PCT-core", ""
"-paytxfee is set very high! This is the transaction fee you will pay if you "
"send a transaction."),
QT_TRANSLATE_NOOP("PCT-core", ""
"A fee rate (in %s/kB) that will be used when fee estimation has insufficient "
"data (default: %s)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Accept relayed transactions received from whitelisted peers even when not "
"relaying transactions (default: %d)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Cannot obtain a lock on data directory %s. PCT Core is probably already "
"running."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Disable all PCT specific functionality (Masternodes, PrivateSend, "
"InstantSend, Governance) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Discover own IP addresses (default: 1 when listening and no -externalip or -"
"proxy)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Do not keep transactions in the mempool longer than <n> hours (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Enable InstantSend, show confirmations for locked transactions (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Enable multiple PrivateSend mixing sessions per block, experimental (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Enable use of automated PrivateSend for funds stored in this wallet (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Error loading %s: You can't enable HD on a already existing non-HD wallet"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Error reading wallet.dat! All keys read correctly, but transaction data or "
"address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Execute command when a wallet InstantSend transaction is successfully locked "
"(%s in cmd is replaced by TxID)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Failed to create backup, file already exists! This could happen if you "
"restarted wallet in less than 60 seconds. You can continue if you are ok "
"with this."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Fees (in %s/kB) smaller than this are considered zero fee for relaying, "
"mining and transaction creation (default: %s)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Fees (in %s/kB) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Force relay of transactions from whitelisted peers even they violate local "
"relay policy (default: %d)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("PCT-core", ""
"How thorough the block verification of -checkblocks is (0-4, default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"If <category> is not supplied or if <category> = 1, output all debugging "
"information."),
QT_TRANSLATE_NOOP("PCT-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"If this block is in the chain assume that it and its ancestors are valid and "
"potentially skip their script verification (0 to verify all, default: %s, "
"testnet: %s)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"InstantSend doesn't support sending values that high yet. Transactions are "
"currently limited to %1 PCT."),
QT_TRANSLATE_NOOP("PCT-core", ""
"InstantSend requires inputs with at least %d confirmations, you might need "
"to wait a few minutes and try again."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Maintain a full address index, used to query for the balance, txids and "
"unspent outputs for addresses (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Maintain a full spent index, used to query the spending txid and input index "
"for an outpoint (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Maintain a timestamp index for block hashes, used to query blocks hashes by "
"a range of timestamps (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Maintain at most <n> connections to peers (temporary service connections "
"excluded) (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Make sure to encrypt your wallet and delete all non-encrypted backups after "
"you verified that wallet works!"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Maximum total fees (in %s) to use in a single wallet transaction; setting "
"this too low may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Name to construct url for KeePass entry that stores the wallet passphrase"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong PCT Core will not work properly."),
QT_TRANSLATE_NOOP("PCT-core", ""
"PrivateSend uses exact denominated amounts to send funds, you might simply "
"need to anonymize some more coins."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Provide liquidity to PrivateSend by infrequently mixing coins on a continual "
"basis (0-100, default: %u, 1=very frequent, high fees, 100=very infrequent, "
"low fees)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Prune configured below the minimum of %d MiB.  Please use a higher number."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Prune: last wallet synchronisation goes beyond pruned data. You need to -"
"reindex (download the whole blockchain again in case of pruned node)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Reduce storage requirements by pruning (deleting) old blocks. This mode is "
"incompatible with -txindex and -rescan. Warning: Reverting this setting "
"requires re-downloading the entire blockchain. (default: 0 = disable pruning "
"blocks, >%u = target size in MiB to use for block files)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Rescans are not possible in pruned mode. You will need to use -reindex which "
"will download the whole blockchain again."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Specify full path to directory for automatic wallet backups (must exist)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("PCT-core", ""
"The transaction amount is too small to send after the fee has been deducted"),
QT_TRANSLATE_NOOP("PCT-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("PCT-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of uacomments."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Tries to keep outbound traffic under the given target (in MiB per 24h), 0 = "
"no limit (default: %d)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Unable to bind to %s on this computer. PCT Core is probably already running."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Unable to locate enough PrivateSend denominated funds for this transaction."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Unable to locate enough PrivateSend non-denominated funds for this "
"transaction that are not equal 1000 PCT."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Unable to locate enough funds for this transaction that are not equal 1000 "
"PCT."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Unsupported argument -socks found. Setting SOCKS version isn't possible "
"anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Unsupported argument -whitelistalwaysrelay ignored, use -whitelistrelay and/"
"or -whitelistforcerelay."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Use N separate masternodes for each denominated input to mix funds (2-16, "
"default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Use UPnP to map the listening port (default: 1 when listening and no -proxy)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Use hierarchical deterministic key generation (HD) after bip39/bip44. Only "
"has effect during wallet creation/first start"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"User defined mnemonic for HD wallet (bip39). Only has effect during wallet "
"creation/first start (default: randomly generated)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"User defined mnemonic passphrase for HD wallet (bip39). Only has effect "
"during wallet creation/first start (default: empty string)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"User defined seed for HD wallet (should be in hex). Only has effect during "
"wallet creation/first start (default: randomly generated)"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Username and hashed password for JSON-RPC connections. The field <userpw> "
"comes in the format: <USERNAME>:<SALT>$<HASH>. A canonical python script is "
"included in share/rpcuser. This option can be specified multiple times"),
QT_TRANSLATE_NOOP("PCT-core", ""
"WARNING! Failed to replenish keypool, please unlock your wallet to do so."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Wallet is locked, can't replenish keypool! Automatic backups and mixing are "
"disabled, please unlock your wallet to replenish keypool."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Warning: Unknown block versions being mined! It's possible unknown rules are "
"in effect"),
QT_TRANSLATE_NOOP("PCT-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Warning: incorrect parameter -walletbackupsdir, path must exist! Using "
"default path."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("PCT-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("PCT-core", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("PCT-core", ""
"You need to rebuild the database using -reindex to go back to unpruned "
"mode.  This will redownload the entire blockchain"),
QT_TRANSLATE_NOOP("PCT-core", ""
"You need to rebuild the database using -reindex-chainstate to change -txindex"),
QT_TRANSLATE_NOOP("PCT-core", ""
"masternodeaddr option is deprecated. Please use masternode.conf to manage "
"your remote masternodes."),
QT_TRANSLATE_NOOP("PCT-core", "%s - %d confirmations"),
QT_TRANSLATE_NOOP("PCT-core", "(%d could be used only on mainnet)"),
QT_TRANSLATE_NOOP("PCT-core", "(default: %s)"),
QT_TRANSLATE_NOOP("PCT-core", "(default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "(must be %d for mainnet)"),
QT_TRANSLATE_NOOP("PCT-core", "-maxmempool must be at least %d MB"),
QT_TRANSLATE_NOOP("PCT-core", "<category> can be:"),
QT_TRANSLATE_NOOP("PCT-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("PCT-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("PCT-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("PCT-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("PCT-core", "Already have that input."),
QT_TRANSLATE_NOOP("PCT-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Append comment to the user agent string"),
QT_TRANSLATE_NOOP("PCT-core", "Attempt to recover private keys from a corrupt wallet.dat on startup"),
QT_TRANSLATE_NOOP("PCT-core", "Automatic backups disabled"),
QT_TRANSLATE_NOOP("PCT-core", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("PCT-core", "Block creation options:"),
QT_TRANSLATE_NOOP("PCT-core", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("PCT-core", "Can't mix while sync in progress."),
QT_TRANSLATE_NOOP("PCT-core", "Can't mix: no compatible inputs found!"),
QT_TRANSLATE_NOOP("PCT-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("PCT-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("PCT-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("PCT-core", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("PCT-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("PCT-core", "Chain selection options:"),
QT_TRANSLATE_NOOP("PCT-core", "Collateral not valid."),
QT_TRANSLATE_NOOP("PCT-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("PCT-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("PCT-core", "Connect to KeePassHttp on port <port> (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("PCT-core", "Connection options:"),
QT_TRANSLATE_NOOP("PCT-core", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("PCT-core", "Copyright (C) 2014-%i The PCT Core Developers"),
QT_TRANSLATE_NOOP("PCT-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("PCT-core", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("PCT-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("PCT-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("PCT-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("PCT-core", "Done loading"),
QT_TRANSLATE_NOOP("PCT-core", "ERROR! Failed to create automatic backup"),
QT_TRANSLATE_NOOP("PCT-core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("PCT-core", "Enable publish hash transaction (locked via InstantSend) in <address>"),
QT_TRANSLATE_NOOP("PCT-core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("PCT-core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("PCT-core", "Enable publish raw transaction (locked via InstantSend) in <address>"),
QT_TRANSLATE_NOOP("PCT-core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("PCT-core", "Enable the client to act as a masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Enable transaction replacement in the memory pool (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Entries are full."),
QT_TRANSLATE_NOOP("PCT-core", "Entry exceeds maximum size."),
QT_TRANSLATE_NOOP("PCT-core", "Error connecting to Masternode."),
QT_TRANSLATE_NOOP("PCT-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("PCT-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("PCT-core", "Error loading %s: You can't disable HD on a already existing HD wallet"),
QT_TRANSLATE_NOOP("PCT-core", "Error loading block database"),
QT_TRANSLATE_NOOP("PCT-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("PCT-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("PCT-core", "Error loading wallet.dat: Wallet requires newer version of PCT Core"),
QT_TRANSLATE_NOOP("PCT-core", "Error opening block database"),
QT_TRANSLATE_NOOP("PCT-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("PCT-core", "Error"),
QT_TRANSLATE_NOOP("PCT-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("PCT-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("PCT-core", "Failed to create backup %s!"),
QT_TRANSLATE_NOOP("PCT-core", "Failed to create backup, error: %s"),
QT_TRANSLATE_NOOP("PCT-core", "Failed to delete backup, error: %s"),
QT_TRANSLATE_NOOP("PCT-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("PCT-core", "Failed to load fulfilled requests cache from"),
QT_TRANSLATE_NOOP("PCT-core", "Failed to load governance cache from"),
QT_TRANSLATE_NOOP("PCT-core", "Failed to load masternode cache from"),
QT_TRANSLATE_NOOP("PCT-core", "Failed to load masternode payments cache from"),
QT_TRANSLATE_NOOP("PCT-core", "Failed to parse host:port string"),
QT_TRANSLATE_NOOP("PCT-core", "Fee (in %s/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("PCT-core", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("PCT-core", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("PCT-core", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("PCT-core", "Importing..."),
QT_TRANSLATE_NOOP("PCT-core", "Imports blocks from external blk000??.dat file on startup"),
QT_TRANSLATE_NOOP("PCT-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Incompatible mode."),
QT_TRANSLATE_NOOP("PCT-core", "Incompatible version."),
QT_TRANSLATE_NOOP("PCT-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("PCT-core", "Information"),
QT_TRANSLATE_NOOP("PCT-core", "Initialization sanity check failed. PCT Core is shutting down."),
QT_TRANSLATE_NOOP("PCT-core", "Input is not valid."),
QT_TRANSLATE_NOOP("PCT-core", "InstantSend options:"),
QT_TRANSLATE_NOOP("PCT-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("PCT-core", "Invalid -onion address: '%s'"),
QT_TRANSLATE_NOOP("PCT-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("PCT-core", "Invalid amount for -fallbackfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("PCT-core", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("PCT-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("PCT-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("PCT-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("PCT-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("PCT-core", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("PCT-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("PCT-core", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("PCT-core", "Invalid script detected."),
QT_TRANSLATE_NOOP("PCT-core", "KeePassHttp id for the established association"),
QT_TRANSLATE_NOOP("PCT-core", "KeePassHttp key for AES encrypted communication with KeePass"),
QT_TRANSLATE_NOOP("PCT-core", "Keep N PCT anonymized (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Keep the transaction memory pool below <n> megabytes (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Keypool ran out, please call keypoolrefill first"),
QT_TRANSLATE_NOOP("PCT-core", "Last PrivateSend was too recent."),
QT_TRANSLATE_NOOP("PCT-core", "Last successful PrivateSend action was too recent."),
QT_TRANSLATE_NOOP("PCT-core", "Line: %d"),
QT_TRANSLATE_NOOP("PCT-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("PCT-core", "Loading banlist..."),
QT_TRANSLATE_NOOP("PCT-core", "Loading block index..."),
QT_TRANSLATE_NOOP("PCT-core", "Loading fulfilled requests cache..."),
QT_TRANSLATE_NOOP("PCT-core", "Loading governance cache..."),
QT_TRANSLATE_NOOP("PCT-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("PCT-core", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("PCT-core", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("PCT-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("PCT-core", "Location of the auth cookie (default: data dir)"),
QT_TRANSLATE_NOOP("PCT-core", "Lock is already in place."),
QT_TRANSLATE_NOOP("PCT-core", "Lock masternodes from masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Make the wallet broadcast transactions"),
QT_TRANSLATE_NOOP("PCT-core", "Masternode cache is empty, skipping payments and governance cache..."),
QT_TRANSLATE_NOOP("PCT-core", "Masternode options:"),
QT_TRANSLATE_NOOP("PCT-core", "Masternode queue is full."),
QT_TRANSLATE_NOOP("PCT-core", "Masternode:"),
QT_TRANSLATE_NOOP("PCT-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Minimum bytes per sigop in transactions we relay and mine (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Missing input transaction information."),
QT_TRANSLATE_NOOP("PCT-core", "Mixing in progress..."),
QT_TRANSLATE_NOOP("PCT-core", "Mnemonic passphrase is too long, must be at most 256 characters"),
QT_TRANSLATE_NOOP("PCT-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("PCT-core", "No Masternodes detected."),
QT_TRANSLATE_NOOP("PCT-core", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("PCT-core", "No errors detected."),
QT_TRANSLATE_NOOP("PCT-core", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("PCT-core", "Node relay options:"),
QT_TRANSLATE_NOOP("PCT-core", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("PCT-core", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("PCT-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("PCT-core", "Not enough funds to anonymize."),
QT_TRANSLATE_NOOP("PCT-core", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("PCT-core", "Number of automatic wallet backups (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("PCT-core", "Options:"),
QT_TRANSLATE_NOOP("PCT-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("PCT-core", "Port: %d"),
QT_TRANSLATE_NOOP("PCT-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Print version and exit"),
QT_TRANSLATE_NOOP("PCT-core", "PrivateSend is idle."),
QT_TRANSLATE_NOOP("PCT-core", "PrivateSend options:"),
QT_TRANSLATE_NOOP("PCT-core", "PrivateSend request complete:"),
QT_TRANSLATE_NOOP("PCT-core", "PrivateSend request incomplete:"),
QT_TRANSLATE_NOOP("PCT-core", "Prune cannot be configured with a negative value."),
QT_TRANSLATE_NOOP("PCT-core", "Prune mode is incompatible with -txindex."),
QT_TRANSLATE_NOOP("PCT-core", "Pruning blockstore..."),
QT_TRANSLATE_NOOP("PCT-core", "RPC server options:"),
QT_TRANSLATE_NOOP("PCT-core", "Rebuild chain state and block index from the blk*.dat files on disk"),
QT_TRANSLATE_NOOP("PCT-core", "Rebuild chain state from the currently indexed blocks"),
QT_TRANSLATE_NOOP("PCT-core", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Reducing -maxconnections from %d to %d, because of system limitations."),
QT_TRANSLATE_NOOP("PCT-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Rescan the block chain for missing wallet transactions on startup"),
QT_TRANSLATE_NOOP("PCT-core", "Rescanning..."),
QT_TRANSLATE_NOOP("PCT-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("PCT-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("PCT-core", "Send trace/debug info to debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Session not complete!"),
QT_TRANSLATE_NOOP("PCT-core", "Session timed out."),
QT_TRANSLATE_NOOP("PCT-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("PCT-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("PCT-core", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Set the masternode private key"),
QT_TRANSLATE_NOOP("PCT-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("PCT-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("PCT-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("PCT-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("PCT-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("PCT-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("PCT-core", "Specify data directory"),
QT_TRANSLATE_NOOP("PCT-core", "Specify masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("PCT-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("PCT-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("PCT-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("PCT-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Submitted following entries to masternode: %u / %d"),
QT_TRANSLATE_NOOP("PCT-core", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("PCT-core", "Submitted to masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("PCT-core", "Synchroning blockchain..."),
QT_TRANSLATE_NOOP("PCT-core", "Synchronization failed"),
QT_TRANSLATE_NOOP("PCT-core", "Synchronization finished"),
QT_TRANSLATE_NOOP("PCT-core", "Synchronization pending..."),
QT_TRANSLATE_NOOP("PCT-core", "Synchronizing governance objects..."),
QT_TRANSLATE_NOOP("PCT-core", "Synchronizing masternode payments..."),
QT_TRANSLATE_NOOP("PCT-core", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("PCT-core", "The transaction amount is too small to pay the fee"),
QT_TRANSLATE_NOOP("PCT-core", "This help message"),
QT_TRANSLATE_NOOP("PCT-core", "This is experimental software."),
QT_TRANSLATE_NOOP("PCT-core", "This is not a Masternode."),
QT_TRANSLATE_NOOP("PCT-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Too many %f denominations, removing."),
QT_TRANSLATE_NOOP("PCT-core", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("PCT-core", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("PCT-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("PCT-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("PCT-core", "Transaction created successfully."),
QT_TRANSLATE_NOOP("PCT-core", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("PCT-core", "Transaction not valid."),
QT_TRANSLATE_NOOP("PCT-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("PCT-core", "Transaction too large"),
QT_TRANSLATE_NOOP("PCT-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("PCT-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("PCT-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("PCT-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("PCT-core", "Unknown response."),
QT_TRANSLATE_NOOP("PCT-core", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("PCT-core", "Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("PCT-core", "Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("PCT-core", "Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("PCT-core", "Upgrade wallet to latest format on startup"),
QT_TRANSLATE_NOOP("PCT-core", "Use KeePass 2 integration using KeePassHttp plugin (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Use the test chain"),
QT_TRANSLATE_NOOP("PCT-core", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("PCT-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("PCT-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("PCT-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("PCT-core", "Very low number of keys left: %d"),
QT_TRANSLATE_NOOP("PCT-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("PCT-core", "Wallet is locked."),
QT_TRANSLATE_NOOP("PCT-core", "Wallet needed to be rewritten: restart PCT Core to complete"),
QT_TRANSLATE_NOOP("PCT-core", "Wallet options:"),
QT_TRANSLATE_NOOP("PCT-core", "Wallet window title"),
QT_TRANSLATE_NOOP("PCT-core", "Warning"),
QT_TRANSLATE_NOOP("PCT-core", "Warning: unknown new rules activated (versionbit %i)"),
QT_TRANSLATE_NOOP("PCT-core", "Wasn't able to create wallet backup folder %s!"),
QT_TRANSLATE_NOOP("PCT-core", "Whether to operate in a blocks only mode (default: %u)"),
QT_TRANSLATE_NOOP("PCT-core", "Will retry..."),
QT_TRANSLATE_NOOP("PCT-core", "Your entries added successfully."),
QT_TRANSLATE_NOOP("PCT-core", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("PCT-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("PCT-core", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("PCT-core", "no mixing available."),
QT_TRANSLATE_NOOP("PCT-core", "see debug.log for details."),
QT_TRANSLATE_NOOP("PCT-core", "wallet.dat corrupt, salvage failed"),
};
