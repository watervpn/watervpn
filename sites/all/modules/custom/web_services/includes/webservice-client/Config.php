<?php
namespace WvpnClient;

class Config{
    /**
     *
     */
    protected $config;

    public function getConfig()
    {
        return $this->config;
    }

    public function __construct($config = null)
    {
        // merge custom config here
        if(!empty($config)){
            $this->mergeConfigs( $config, Config::getDefaultConfigArray() );
        }else{
            $this->config = Config::getDefaultConfigArray();
        }
    }

    protected function mergeConfigs( array $customConfig, array $defaultConfig ){

    }

    /**
     * Default webService Client Config
     * Default config merge/overwrite by cofnig pass in by constructor
     */
    public static function getDefaultConfigArray()
    {
        return array(
            'client' => array(
                'ssl-verify' => false,
                'headers' => array(
                    'Accept' => 'application/json',
                ),
            ),
            'service' => array(
                'radius' => array(
                        'class'     => 'WvpnClient\Client\Radius',
                        'url'       => 'https://devws.watervpn.com/radius/',
                        'user'      => 'watervpn',
                        'passwd'    => 'landmark5!',
                ),
                'rsa' => array(
                        'class'     => 'WvpnClient\Client\RAS',
                        'url'       => 'https://api-test.dev.alfredkan.com/rsa/',
                        'user'      => 'watervpn',
                        'passwd'    => 'landmark5!',
                ),
                'openvpn' => array(
                        'class'     => 'WvpnClient\Client\Openvpn',
                        'url'       => 'http://api-test.dev.alfredkan.com/openvpn/',
                        'user'      => 'watervpn',
                        'passwd'    => 'landmark5!',
                ),
            ),
        );
    }

    public function getServiceConfig( $service )
    {
        $serviceConfig = $this->getConfig();
        if(isset($serviceConfig['service'][$service])){
            return $serviceConfig['service'][$service];
        }
    }

    public function getClientConfig()
    {
        $serviceConfig = $this->getConfig();
        return $serviceConfig['client'];
    }


}


